#include <iostream>

int main() {
    //overflow
    unsigned char data {250};
    ++data;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout << "data: " << static_cast<int>(data) << std::endl;

    return 0;
}