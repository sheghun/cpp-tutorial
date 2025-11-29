#include <iostream>

// bit masks
constexpr unsigned char mask_bit_0{0b00000001};
constexpr unsigned char mask_bit_1{0b00000010};
constexpr unsigned char mask_bit_2{0b00000100};
constexpr unsigned char mask_bit_3{0b00001000};
constexpr unsigned char mask_bit_4{0b00010000};
constexpr unsigned char mask_bit_5{0b00100000};
constexpr unsigned char mask_bit_6{0b01000000};
constexpr unsigned char mask_bit_7{0b10000000};

// 8 flags
void use_options_v0(bool flag0, bool flag1, bool flag2, bool flag3, bool flag4, bool flag5, bool flag6, bool flag7) {
    std::cout << "flag0 is: " << flag0 << std::endl;
    std::cout << "flag1 is: " << flag1 << std::endl;
    std::cout << "flag2 is: " << flag2 << std::endl;
    std::cout << "flag3 is: " << flag3 << std::endl;
    std::cout << "flag4 is: " << flag4 << std::endl;
    std::cout << "flag5 is: " << flag5 << std::endl;
    std::cout << "flag6 is: " << flag6 << std::endl;
    std::cout << "flag7 is: " << flag7 << std::endl;
}

// take 8 bits of byte
void use_options_v1(unsigned char flags) {
    std::cout << std::endl;
    std::cout << "flags: " << std::bitset<8>(flags) << std::endl;

    std::cout << std::boolalpha;
    std::cout << "flag0 is: " << ((flags & mask_bit_0) >> 0) << std::endl;
    std::cout << "flag1 is: " << ((flags & mask_bit_1) >> 1) << std::endl;
    std::cout << "flag2 is: " << ((flags & mask_bit_2) >> 2) << std::endl;
    std::cout << "flag3 is: " << ((flags & mask_bit_3) >> 3) << std::endl;
    std::cout << "flag4 is: " << ((flags & mask_bit_4) >> 4) << std::endl;
    std::cout << "flag5 is: " << ((flags & mask_bit_5) >> 5) << std::endl;
    std::cout << "flag6 is: " << ((flags & mask_bit_6) >> 6) << std::endl;
    std::cout << "flag7 is: " << ((flags & mask_bit_7) >> 7) << std::endl;
}

int main() {

    use_options_v0(true, false, true, false, true, false, true, false);
    use_options_v1(0b01010101);

    return 0;
}
