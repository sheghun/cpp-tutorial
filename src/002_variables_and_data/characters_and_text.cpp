#include <iostream>

int main() {
    char character1{'a'};
    char character2{'r'};
    char character3{'r'};
    char character4{'o'};
    char character5{'w'};

    std::cout << character1 << std::endl;
    std::cout << character2 << std::endl;
    std::cout << character3 << std::endl;
    std::cout << character4 << std::endl;
    std::cout << character5 << std::endl;

    std::cout << std::endl;

    char value = 65;
    char value_string = '%';

    std::cout << "value: " << value << std::endl;
    std::cout << "value(int): " << static_cast<int>(value) << std::endl;


    std::cout << "value_string: " << value_string << std::endl;
    std::cout << "value_string(int): " << static_cast<int>(value_string) << std::endl;
}
