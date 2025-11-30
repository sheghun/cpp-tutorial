#include <iostream>

int main() {
    int day;
    std::cout << "please type a day of the week: ";
    std::cin >> day;

    // check 1 to 7 from monday to sunday
    constexpr int monday{1};
    constexpr int tuesday{2};
    constexpr int wednesday{3};
    constexpr int thursday{4};
    constexpr int friday{5};
    constexpr int saturday{6};
    constexpr int sunday{7};

    if (day < 1 || day > 7) {
        std::cout << day << " is not a valid day." << std::endl;
    } else {
        if (day == monday) {
            std::cout << "today is monday. let's have some fun";
        } else if (day == tuesday) {
            std::cout << "today is tuesday. let's have some fun";
        } else if (day == wednesday) {
            std::cout << "today is wednesday. let's have some fun";
        } else if (day == thursday) {
            std::cout << "today is thursday. let's have some fun";
        } else if (day == friday) {
            std::cout << "today is friday. let's have some fun";
        } else if (day == saturday) {
            std::cout << "today is saturday. let's have some fun";
        } else if (day == sunday) {
            std::cout << "today is sunday. let's have some fun";
        }
    }
}
