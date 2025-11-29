#include <iostream>

int main() {
    constexpr unsigned int red_mask{0xFF000000};
    constexpr unsigned int green_mask{0x00FF0000};
    constexpr unsigned int blue_mask{0x0000FF00};
    constexpr unsigned int alpha_mask{0x000000FF};

    constexpr unsigned int my_color{0xAABCDE00};

    // log binary form of the masks
    std::cout << "red_mask: " << std::bitset<32>(red_mask) << std::endl;
    std::cout << "green_mask: " << std::bitset<32>(green_mask) << std::endl;
    std::cout << "blue_mask: " << std::bitset<32>(blue_mask) << std::endl;
    std::cout << "alpha_mask: " << std::bitset<32>(alpha_mask) << std::endl;
    std::cout << "my_color: " << std::bitset<32>(my_color) << std::endl;

    // represent in 8 bits
    std::cout << "red: " << ((my_color & red_mask) >> 24) << std::endl;
    std::cout << "green: " << ((my_color & green_mask) >> 16) << std::endl;
    std::cout << "blue: " << ((my_color & blue_mask) >> 8) << std::endl;
    std::cout << "alpha: " << (my_color & alpha_mask) << std::endl;
}
