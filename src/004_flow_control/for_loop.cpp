#include <iostream>

int main() {
    constexpr int count{10};
    for (size_t i = 0; i < count; i++) {
        std::cout << "i love c++" << std::endl;
    }

    size_t sum{};

    for (size_t i = 0; i < 100; ++i) {
        sum += i;
    }

    std::cout << "sum: " << sum << std::endl;

    for (size_t i{0}, x{5}, y{22}; y > 15; ++i, x += 5, y -= 1) {
        std::cout << "i: " << i << ", x: " << x << ", y: " << y << std::endl;
    }

    for (unsigned char i{65}; i <= 90; ++i) {
        std::cout << i << ((i < 90) ? " " : "");
    }
}
