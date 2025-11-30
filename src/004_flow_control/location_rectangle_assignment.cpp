#include <iostream>

int main() {
    int x, y;

    constexpr int x_pos{10};
    constexpr int y_pos{5};
    constexpr int x_neg{-10};
    constexpr int y_neg{-5};

    std::cout << "welcome to territory control. please type your x and y position:" << std::endl;
    std::cout << "type in your x location: " << std::endl;
    std::cin >> x;
    std::cout << "type in your y location: " << std::endl;
    std::cin >> y;

    if ((x >= x_neg && x <= x_pos) && (y >= y_neg && y <= y_pos)) {
        std::cout << "you are completely surrounded";
        return 0;
    }

    std::cout << "you're out of reach";


    return 0;
}
