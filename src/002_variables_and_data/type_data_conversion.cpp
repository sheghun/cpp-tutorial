#include <iostream>

int main() {
    double price{45.6};
    int units{10};


    // int is implicitly converted to double before operation
    auto total_price = price * units;

    std::cout << "total price: " << total_price << std::endl;
    std::cout << "sizeof total_price: " << sizeof(total_price) << std::endl;

    int x;
    double y{45.44};
    x = y; // double to int
    std::cout << "the value of x is: " << x << std::endl;
    std::cout << "sizeof x: " << sizeof(x) << std::endl;

}
