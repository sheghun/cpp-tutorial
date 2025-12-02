#include <iostream>


void print_multiples_of_3() {


    std::vector<int> numbers{1, 21, 4, 5, 7, 3, 9, 3, 5, 17, 15};

    // Don't modify anything above this line
    // Your code should go below this line

    for (auto value: numbers) {
        if (value % 3 == 0) {
            std::cout << value << " ";
        }
    }


    // Your code should go above this line
    // Don't modify anything below this line
}

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
    std::cout << std::endl;


    std::cout << "----------ranged loop-----------" << std::endl;

    // range loop
    int bag_of_values[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int value: bag_of_values) {
        std::cout << "value: " << value << std::endl;
    }

    for (size_t i{0}; i < 10; ++i) {
        std::cout << "value: " << bag_of_values[i] << std::endl;
    }

    print_multiples_of_3();

    return 0;
}

