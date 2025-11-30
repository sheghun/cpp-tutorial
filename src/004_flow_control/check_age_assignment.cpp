#include <iostream>

int main() {
    int age;
    std::cout << "please type your age: ";

    std::cin >> age;
    std::cout << std::endl;

    if (age >= 21) {
        if (age <= 39) {
            std::cout << "you are eligible for the treatment";
            return 0;
        }
        std::cout << "sorry you are too old for the treatment";
        return 0;
    }
    std::cout << "sorry, you are too young for the treatment";
}
