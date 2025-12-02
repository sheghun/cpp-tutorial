#include <iostream>

int main() {

    constexpr size_t count{10};
    size_t i{0};
    while (i < count) {
        std::cout << i << ": i love c++" << std::endl;
        ++i;
    }

    i = 0;

    do {
        std::cout << i << ": i love c++" << std::endl;
        ++i;
    } while (i < count);

    size_t y{100};

    do {
        if (y % 19 == 0) {
            std::cout << y << " ";
        }
        ++y;
    } while (y <= 1000);
}
