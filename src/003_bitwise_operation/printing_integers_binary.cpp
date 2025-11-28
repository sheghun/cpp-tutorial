#include <iostream>
#include <bitset>

int main() {

    constexpr unsigned short int data{15};

    std::cout << "data (dec): " << std::dec << data << std::endl;
    std::cout << "data (oct): " << std::oct << data << std::endl;
    std::cout << "data (hex): " << std::hex << data << std::endl;
    std::cout << "data (bin): " << std::bitset<16>(data) << std::endl;


    return 0;
}