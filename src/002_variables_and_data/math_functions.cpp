#include <iostream>
#include <cmath>

int main () {
    double weight{7.7};

    //floor
    std::cout << "weight rounded to floor is: " << std::floor(weight) << std::endl;

    //ceil
    std::cout << "weight rounded to ceil is: " << std::ceil(weight) << std::endl;

    double savings {-5000};

    std::cout << "abs value of weight is: " << std::abs(weight) << std::endl;
    std::cout << "abs value of savings is: " << std::abs(savings) << std::endl;

    //exp: f(x) = e ^ x, where e=2.71828
    double exponential {std::exp(10)};
    std::cout << "exponential value of 10 is: " << exponential << std::endl;

    //pow
    double power {std::pow(2, 10)};
    std::cout << "2 ^ 10 is: " << power << std::endl;

    double log {std::log(std::exp(10))};
    std::cout << "log(e ^ 10) is: " << log << std::endl;

    return 0;
}