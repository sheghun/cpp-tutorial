#include <iostream>


int main() {
    double value1 {5.3};

    long double value2 {2313829120.12341221};

    auto result = value1 / 0;

    std::cout << result << std::endl;
    std::cout << value2 << std::endl;

}