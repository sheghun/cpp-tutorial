#include <iostream>

int main() {

    unsigned short int value{0xff0u};

    std::cout << "size of short int: " << (sizeof(short int) * 8) << std::endl; // 16 bits

    std::cout << "value: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

    // shift one bit left
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "valueue << 1: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

    // shift one bit left
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value >> 1: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

    // shift one bit left
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value << 1: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

    // shift one bit left
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value >> 1: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

    // shift one bit left
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value >> 1: " << std::bitset<16>(value) << ", dec: " << value << std::endl;


    // shift right by one bit
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value >> 1: " << std::bitset<16>(value) << ", dec: " << value << std::endl;

    long long unsigned int value2{1};
    // log value and bit size before shift
    std::cout << "value2: " << std::bitset<64>(value2) << ", dec: " << value2 << std::endl;

    // shift right by 63
    value2 = value2 << 63;
    // value2 += value2 - 1;
    std::cout << "value2 << 63: " << std::bitset<64>(value2) << ", dec: " << value2 << std::endl;

    return 0;
}
