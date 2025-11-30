#include <iostream>

int main() {

    int x;

    std::cout << "please type an integral value: ";
    std::cin >> x;

    if (x % 2 == 0) {
        std::cout << x << " is even" << std::endl;
    } else {
        std::cout << x << " is odd" << std::endl;
    }

    return 0;
}
