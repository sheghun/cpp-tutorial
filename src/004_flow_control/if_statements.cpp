#include <iostream>

int main() {
    constexpr int number1{55};
    constexpr int number2{60};

    bool result = (number1 < number2);

    if (result) {
        std::cout << "number1 is less than number2" << std::endl;
    }

    if (!result) {
        std::cout << "number1 is greater than number2" << std::endl;
    }

}