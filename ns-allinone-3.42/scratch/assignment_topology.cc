#include "ns3/core-module.h"
#include "ns3/network-module.h"
#include "ns3/internet-module.h"
#include "ns3/point-to-point-module.h"
#include "ns3/applications-module.h"
#include "ns3/mobility-module.h"
#include "ns3/netanim-module.h"
#include "ns3/flow-monitor-module.h"

using namespace ns3;

NS_LOG_COMPONENT_DEFINE("AssignmentTopology");

int main(int argc, char *argv[]) {
    // Enable logging for AssignmentTopology
    LogComponentEnable("AssignmentTopology", LOG_LEVEL_INFO);

    NS_LOG_INFO("Starting simulation...");

    // Command Line Arguments
    CommandLine cmd;
    cmd.Parse(argc, argv);

    // Create Nodes
    NodeContainer hosts, routers;
    hosts.Create(7);  // Workstations A to G
    routers.Create(4); // Routers R1 to R4

    // Set Mobility
    MobilityHelper mobility;
    mobility.SetMobilityModel("ns3::ConstantPositionMobilityModel");
    mobility.Install(hosts);
    mobility.Install(routers);

    // Assign Positions for visualization
    for (uint32_t i = 0; i < 7; i++) {
        hosts.Get(i)->GetObject<MobilityModel>()->SetPosition(Vector(10 * (i + 1), 20, 0));
    }
    routers.Get(0)->GetObject<MobilityModel>()->SetPosition(Vector(30, 50, 0)); // R1
    routers.Get(1)->GetObject<MobilityModel>()->SetPosition(Vector(50, 50, 0)); // R2
    routers.Get(2)->GetObject<MobilityModel>()->SetPosition(Vector(70, 50, 0)); // R3
    routers.Get(3)->GetObject<MobilityModel>()->SetPosition(Vector(90, 50, 0)); // R4

    NS_LOG_INFO("Nodes and mobility model set.");

    // Point-to-Point Links
    PointToPointHelper p2p;
    p2p.SetDeviceAttribute("DataRate", StringValue("1Mbps"));
    p2p.SetChannelAttribute("Delay", StringValue("1ms"));

    // Connect Hosts to Routers
    NetDeviceContainer devicesA_R1 = p2p.Install(hosts.Get(0), routers.Get(0));
    NetDeviceContainer devicesB_R1 = p2p.Install(hosts.Get(1), routers.Get(0));
    NetDeviceContainer devicesC_R3 = p2p.Install(hosts.Get(2), routers.Get(2));
    NetDeviceContainer devicesD_R3 = p2p.Install(hosts.Get(3), routers.Get(2));
    NetDeviceContainer devicesE_R2 = p2p.Install(hosts.Get(4), routers.Get(1));
    NetDeviceContainer devicesF_R2 = p2p.Install(hosts.Get(5), routers.Get(1));
    NetDeviceContainer devicesG_R4 = p2p.Install(hosts.Get(6), routers.Get(3));

    NS_LOG_INFO("Hosts connected to routers.");

    // Connect Routers
    p2p.SetDeviceAttribute("DataRate", StringValue("3Mbps"));
    NetDeviceContainer devicesR1_R2 = p2p.Install(routers.Get(0), routers.Get(1));
    NetDeviceContainer devicesR1_R3 = p2p.Install(routers.Get(0), routers.Get(2));
    NetDeviceContainer devicesR3_R4 = p2p.Install(routers.Get(2), routers.Get(3));
    p2p.SetDeviceAttribute("DataRate", StringValue("1Mbps"));
    NetDeviceContainer devicesR2_R4 = p2p.Install(routers.Get(1), routers.Get(3));

    NS_LOG_INFO("Routers interconnected.");

    // Internet Stack
    InternetStackHelper stack;
    stack.Install(hosts);
    stack.Install(routers);

    NS_LOG_INFO("Internet stack installed.");

    // Assign IP Addresses
    Ipv4AddressHelper address;
    address.SetBase("10.1.1.0", "255.255.255.0");
    address.Assign(devicesA_R1);
    address.SetBase("10.1.2.0", "255.255.255.0");
    address.Assign(devicesB_R1);
    address.SetBase("10.1.3.0", "255.255.255.0");
    address.Assign(devicesC_R3);
    address.SetBase("10.1.4.0", "255.255.255.0");
    address.Assign(devicesD_R3);
    address.SetBase("10.1.5.0", "255.255.255.0");
    address.Assign(devicesE_R2);
    address.SetBase("10.1.6.0", "255.255.255.0");
    address.Assign(devicesF_R2);
    address.SetBase("10.1.7.0", "255.255.255.0");
    address.Assign(devicesG_R4);
    address.SetBase("10.1.8.0", "255.255.255.0");
    address.Assign(devicesR1_R2);
    address.SetBase("10.1.9.0", "255.255.255.0");
    address.Assign(devicesR1_R3);
    address.SetBase("10.1.10.0", "255.255.255.0");
    address.Assign(devicesR3_R4);
    address.SetBase("10.1.11.0", "255.255.255.0");
    address.Assign(devicesR2_R4);

    NS_LOG_INFO("IP addresses assigned.");

    // Set Routing
    Ipv4GlobalRoutingHelper::PopulateRoutingTables();

    // Configure Applications
    uint16_t port = 9; // UDP Echo Port
    UdpEchoServerHelper echoServer(port);
    ApplicationContainer serverApps = echoServer.Install(hosts.Get(4));
    serverApps.Start(Seconds(1.0));
    serverApps.Stop(Seconds(30.0));

    UdpEchoClientHelper echoClient(Ipv4Address("10.1.5.1"), port); // Target Host E
    echoClient.SetAttribute("MaxPackets", UintegerValue(10));
    echoClient.SetAttribute("Interval", TimeValue(Seconds(1.0)));
    echoClient.SetAttribute("PacketSize", UintegerValue(1024));
    ApplicationContainer clientApps = echoClient.Install(hosts.Get(0));
    clientApps.Start(Seconds(2.0));
    clientApps.Stop(Seconds(30.0));

    NS_LOG_INFO("Applications installed.");

    // Enable Flow Monitor
    FlowMonitorHelper flowMonitorHelper;
    Ptr<FlowMonitor> monitor = flowMonitorHelper.InstallAll();

    // NetAnim Setup
    AnimationInterface anim("assignment.xml");

    Simulator::Stop(Seconds(30.0));
    Simulator::Run();

    NS_LOG_INFO("Simulation finished.");

    // Analyze Results
    monitor->CheckForLostPackets();

    Simulator::Destroy();
    return 0;
}
