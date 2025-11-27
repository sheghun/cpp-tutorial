#include <iostream>

int main() {
    double celsius = {-1.0};
    std::cout << "what is your current temperature in celsius? "  << std::endl;

    std::cin >> celsius;
    std::cout << "your temperature in fahrenheit is: " << (celsius * 9.0 / 5.0) + 32 << std::endl;
}