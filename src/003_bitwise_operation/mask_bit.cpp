#include <iomanip>
#include <iostream>

int main() {

    constexpr unsigned char COLUMN_WIDTH{10};

    // list of masks
    constexpr unsigned char mask_bit_0{0b00000001};
    constexpr unsigned char mask_bit_1{0b00000010};
    constexpr unsigned char mask_bit_2{0b00000100};
    constexpr unsigned char mask_bit_3{0b00001000};
    constexpr unsigned char mask_bit_4{0b00010000};
    constexpr unsigned char mask_bit_5{0b00100000};
    constexpr unsigned char mask_bit_6{0b01000000};
    constexpr unsigned char mask_bit_7{0b10000000};

    // sandbox variable
    unsigned char var{0b00000000};

    std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var) << std::endl;

    // set a few bits: make them 1's regardless of what's in there;

    // set bit 1
    var |= mask_bit_1;
    std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var)
              << std::setw(COLUMN_WIDTH) << "dec: " << std::setw(COLUMN_WIDTH) << static_cast<int>(var) << std::endl;


    // set bit 5
    var |= mask_bit_5;
    std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var)
              << std::setw(COLUMN_WIDTH) << "dec: " << std::setw(COLUMN_WIDTH) << static_cast<int>(var) << std::endl;

    // resetting bits: set to 0

    // reset bit 1
    var &= ~mask_bit_1;
    std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var)
              << std::setw(COLUMN_WIDTH) << "dec: " << std::setw(COLUMN_WIDTH) << static_cast<int>(var) << std::endl;

    // reset bit 5
    var &= ~mask_bit_5;
    std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var)
              << std::setw(COLUMN_WIDTH) << "dec: " << std::setw(COLUMN_WIDTH) << static_cast<int>(var) << std::endl;

    // set all bits
    var |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 | mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
    std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var)
              << std::setw(COLUMN_WIDTH) << "dec: " << std::setw(COLUMN_WIDTH) << static_cast<int>(var) << std::endl;

    // reset bits at pos 0, 2, 4, 6
    var &= ~(mask_bit_0 | mask_bit_2 | mask_bit_4 | mask_bit_6);
    std::cout << std::setw(COLUMN_WIDTH) << "var: " << std::setw(COLUMN_WIDTH) << std::bitset<8>(var)
              << std::setw(COLUMN_WIDTH) << "dec: " << std::setw(COLUMN_WIDTH) << static_cast<int>(var) << std::endl;

    // check state of bit
    std::cout << std::endl;
    std::cout << "checking the state of each bit position (on/off)" << std::endl;
    std::cout << "bit0 is " << ((var & mask_bit_0) >> 0) << std::endl;
    std::cout << "bit1 is " << ((var & mask_bit_1) >> 1) << std::endl;
    std::cout << "bit2 is " << ((var & mask_bit_2) >> 2) << std::endl;
    std::cout << "bit3 is " << ((var & mask_bit_3) >> 3) << std::endl;
    std::cout << "bit4 is " << ((var & mask_bit_4) >> 4) << std::endl;
    std::cout << "bit5 is " << ((var & mask_bit_5) >> 5) << std::endl;
    std::cout << "bit6 is " << ((var & mask_bit_6) >> 6) << std::endl;
    std::cout << "bit7 is " << ((var & mask_bit_7) >> 7) << std::endl;


    std::cout << std::endl;
    std::cout << "toggling bit" << std::endl;
    // toggle bit 1 and 7
    var ^= (mask_bit_1 | mask_bit_7);

    std::cout << "bit1 is " << ((var & mask_bit_1) >> 1) << std::endl;
    std::cout << "bit7 is " << ((var & mask_bit_7) >> 7) << std::endl;


    return 0;
}
