#include <iomanip>
#include <iostream>


int main() {
    int COLUMN_WIDTH{20};
    unsigned char value1{0x3}; // 000 0011
    unsigned char value2{0x5}; // 000 0101

    std::cout << std::setw(COLUMN_WIDTH) << "value 1: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1)
              << std::endl;

    std::cout << std::setw(COLUMN_WIDTH) << "value 2: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(value2);

    // and
    std::cout << std::endl;
    std::cout << "bitwise and: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value 1 & value 2: " << std::setw(COLUMN_WIDTH)
              << std::bitset<8>(value1 & value2) << std::endl;

    // or
    std::cout << std::endl;
    std::cout << "bitwise or: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value 1 | value 2: " << std::setw(COLUMN_WIDTH)
              << std::bitset<8>(value1 | value2) << std::endl;

    // xor
    std::cout << std::endl;
    std::cout << "bitwise xor: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "value 1 ^ value 2: " << std::setw(COLUMN_WIDTH)
              << std::bitset<8>(value1 ^ value2) << std::endl;

    // not
    std::cout << std::endl;
    std::cout << "bitwise not: " << std::endl;
    std::cout << std::setw(COLUMN_WIDTH) << "~value 1: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(~value1)
              << std::endl;
}
