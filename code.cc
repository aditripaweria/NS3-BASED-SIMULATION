#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/internet-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/applications-module.h"
#include "ns3/mobility-module.h"
#include "ns3/netanim-module.h"
#include "ns3/flow-monitor-module.h"
#include "ns3/error-model.h"

using namespace ns3;

NS_LOG_COMPONENT_DEFINE("AssignmentTopology");

void PacketSent(Ptr<const Packet> packet) {
    NS_LOG_INFO("Packet Sent: UID=" << packet->GetUid());
}

void PacketReceived(Ptr<const Packet> packet) {
    NS_LOG_INFO("Packet Received: UID=" << packet->GetUid());
}

void PrintFlowStats(FlowMonitorHelper &flowMon, Ptr<FlowMonitor> monitor) {
    monitor->CheckForLostPackets();
    Ptr<Ipv4FlowClassifier> classifier = DynamicCast<Ipv4FlowClassifier>(flowMon.GetClassifier());
    FlowMonitor::FlowStatsContainer stats = monitor->GetFlowStats();

    NS_LOG_INFO("\n=== Flow Statistics ===");
    for (auto &flow : stats) {
        auto t = classifier->FindFlow(flow.first);
        NS_LOG_INFO("Flow " << flow.first << " (" << t.sourceAddress << " -> " << t.destinationAddress << ")");
        NS_LOG_INFO("  Tx Packets: " << flow.second.txPackets);
        NS_LOG_INFO("  Rx Packets: " << flow.second.rxPackets);
        NS_LOG_INFO("  Lost Packets: " << flow.second.lostPackets);
        if (flow.second.rxPackets > 0) {
            NS_LOG_INFO("  Throughput: "
                        << (flow.second.rxBytes * 8.0 /
                            (flow.second.timeLastRxPacket.GetSeconds() - flow.second.timeFirstTxPacket.GetSeconds())) /
                               1024 / 1024
                        << " Mbps");
            NS_LOG_INFO("  End-to-End Delay: "
                        << flow.second.delaySum.GetSeconds() / flow.second.rxPackets << " seconds");
        }
    }
}

void SetupApplication(NodeContainer &hosts, uint16_t port) {
    UdpEchoServerHelper echoServer(port);
    ApplicationContainer serverApps = echoServer.Install(hosts.Get(4));
    serverApps.Start(Seconds(1.0));
    serverApps.Stop(Seconds(60.0));

    UdpEchoClientHelper echoClient(Ipv4Address("10.1.5.1"), port);
    echoClient.SetAttribute("MaxPackets", UintegerValue(120));
    echoClient.SetAttribute("Interval", TimeValue(Seconds(0.5)));
    echoClient.SetAttribute("PacketSize", UintegerValue(256));

    ApplicationContainer clientApps = echoClient.Install(hosts.Get(0));
    clientApps.Start(Seconds(2.0));
    clientApps.Stop(Seconds(60.0));

    serverApps.Get(0)->GetObject<UdpEchoServer>()->TraceConnectWithoutContext("Rx", MakeCallback(&PacketReceived));
    clientApps.Get(0)->GetObject<UdpEchoClient>()->TraceConnectWithoutContext("Tx", MakeCallback(&PacketSent));
}

int main(int argc, char *argv[]) {
    LogComponentEnable("AssignmentTopology", LOG_LEVEL_INFO);
    LogComponentEnable("UdpEchoClientApplication", LOG_LEVEL_INFO);
    LogComponentEnable("UdpEchoServerApplication", LOG_LEVEL_INFO);

    NodeContainer hosts, routers;
    hosts.Create(7);
    routers.Create(4);

    MobilityHelper mob;
    mob.SetMobilityModel("ns3::ConstantPositionMobilityModel");
    mob.Install(hosts);
    mob.Install(routers);

    PointToPointHelper conn;
    conn.SetChannelAttribute("Delay", StringValue("1ms"));

    NetDeviceContainer devices[11];
    conn.SetDeviceAttribute("DataRate", StringValue("10Mbps"));
    conn.SetQueue("ns3::DropTailQueue", "MaxSize", StringValue("100p"));

    devices[0] = conn.Install(hosts.Get(0), routers.Get(0));
    devices[1] = conn.Install(hosts.Get(1), routers.Get(0));
    devices[2] = conn.Install(hosts.Get(2), routers.Get(2));
    devices[4] = conn.Install(hosts.Get(4), routers.Get(1));
    devices[5] = conn.Install(hosts.Get(5), routers.Get(1));
    devices[6] = conn.Install(hosts.Get(6), routers.Get(3));

    conn.SetDeviceAttribute("DataRate", StringValue("15Mbps"));
    devices[3] = conn.Install(hosts.Get(3), routers.Get(2));

    conn.SetDeviceAttribute("DataRate", StringValue("20Mbps"));
    devices[7] = conn.Install(routers.Get(0), routers.Get(1));

    conn.SetDeviceAttribute("DataRate", StringValue("25Mbps"));
    devices[8] = conn.Install(routers.Get(0), routers.Get(2));

    conn.SetDeviceAttribute("DataRate", StringValue("30Mbps"));
    devices[9] = conn.Install(routers.Get(2), routers.Get(3));

    conn.SetDeviceAttribute("DataRate", StringValue("20Mbps"));
    devices[10] = conn.Install(routers.Get(1), routers.Get(3));

    Ptr<RateErrorModel> errorModel = CreateObject<RateErrorModel>();
    errorModel->SetRate(0.005);
    for (int i = 0; i < 11; i++) {
        devices[i].Get(1)->SetAttribute("ReceiveErrorModel", PointerValue(errorModel));
    }

    InternetStackHelper stack;
    stack.Install(hosts);
    stack.Install(routers);

    Ipv4AddressHelper address;
    for (int i = 0; i < 11; i++) {
        std::ostringstream subnet;
        subnet << "10.1." << i + 1 << ".0";
        address.SetBase(subnet.str().c_str(), "255.255.255.0");
        address.Assign(devices[i]);
    }

    Ipv4GlobalRoutingHelper::PopulateRoutingTables();

    uint16_t port = 9;
    SetupApplication(hosts, port);

    AsciiTraceHelper ascii;
    conn.EnableAsciiAll(ascii.CreateFileStream("assignment.tr"));

    FlowMonitorHelper flowMon;
    Ptr<FlowMonitor> monitor = flowMon.InstallAll();

    AnimationInterface anim("assignment.xml");

    Simulator::Stop(Seconds(60.0));
    Simulator::Run();

    PrintFlowStats(flowMon, monitor);

    Simulator::Destroy();
    return 0;
}
