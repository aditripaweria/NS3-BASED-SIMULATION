#include "ns3/core-module.h"

using namespace ns3;

NS_LOG_COMPONENT_DEFINE("LogTest");

int main(int argc, char *argv[]) {
    LogComponentEnable("LogTest", LOG_LEVEL_INFO);
    NS_LOG_INFO("This is an NS_LOG test message.");
    std::cout << "This is a std::cout test message." << std::endl;
    return 0;
}

