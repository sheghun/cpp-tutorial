#include <iostream>

int main() {

    switch (constexpr int strength{4}; strength) {
        case 4:
            std::cout << strength << std::endl;
            break;
        case 5:
            std::cout << "5" << std::endl;
            break;
        default:
            std::cout << "default" << std::endl;
    }

    return 0;
}
