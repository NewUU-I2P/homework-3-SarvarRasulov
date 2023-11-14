#include <string>
#include <sstream>

std::string problemSolution4(const std::string &macAddress) {
    // write your code here


    std::string MACAddress, result;
    MACAddress = macAddress;

    std::stringstream ss(macAddress);
    std::string octet;
    int firstOctet = -1;
    for (int i = 0; i < 6; i++) {
        std::getline(ss, octet, ':');
        if (i == 0) {
            firstOctet = std::stoi(octet, 0, 16);
        }
    }

    if (firstOctet == 0xFF) {
        result = "broadcast";
    } else if (firstOctet % 2 == 0) {
        result = "unicast";
    } else {
        result = "multicast";
    }

    // make use of control flow statements
    return result;
}
