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

    // implicit conversion
    double a{12.5};
    double b{34.6};

    int sum = a + b;
    std::cout << "implicit sum: " << sum << std::endl;

    // explicitly cast and sum
    sum = static_cast<int>(a) + static_cast<int>(b);
    std::cout << "explicit cast before sum: " << sum << std::endl;

    // explicitly cast sum up
    sum = static_cast<int>(a + b);
    std::cout << "explicit sum: " << sum << std::endl;

    // old style c-cast
    double pi{3.14};
    int init_pi = (int) pi;
    std::cout << "pi: " << pi << std::endl;
    std::cout << "init_pi: " << init_pi << std::endl;
}
