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

    constexpr bool condition{false};

    // if evaluated at compile time
    if constexpr (condition) {
        std::cout << "condition is true" << std::endl;
    } else {
        std::cout << "condition is false" << std::endl;
    }

    // if with initialiser
    constexpr bool go{true};

    if constexpr (constexpr int speed{10}; go) {
        std::cout << "speed: " << speed << std::endl;
        if (speed > 5) {
            std::cout << "slow down!" << std::endl;
        } else {
            std::cout << "go!" << std::endl;
        }
    } else {
        std::cout << "speed: " << speed << std::endl;
        std::cout << "stop!" << std::endl;
    }

    return 0;
}
