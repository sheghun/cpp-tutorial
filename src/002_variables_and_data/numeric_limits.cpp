#include <iostream>

int main() {
    std::cout << "the range for signed short is from: " << std::numeric_limits<short>::min()
              << " to: " << std::numeric_limits<short>::max() << std::endl;
    std::cout << "the range for unsigned short is from: " << std::numeric_limits<unsigned short>::min()
              << " to: " << std::numeric_limits<unsigned short>::max() << std::endl;
    std::cout << "the range for signed int is from: " << std::numeric_limits<int>::min()
              << " to: " << std::numeric_limits<int>::max() << std::endl;
    std::cout << "the range for unsigned int is from: " << std::numeric_limits<unsigned int>::min()
              << " to: " << std::numeric_limits<unsigned int>::max() << std::endl;
    std::cout << "the range for signed long is from: " << std::numeric_limits<long>::min()
              << " to: " << std::numeric_limits<long>::max() << std::endl;
    std::cout << "the range for unsigned long is from: " << std::numeric_limits<unsigned long>::min()
              << " to: " << std::numeric_limits<unsigned long>::max() << std::endl;
    std::cout << std::fixed;
    std::cout << "the range for float is from: " << std::numeric_limits<float>::min()
              << " to: " << std::numeric_limits<float>::max() << std::endl;
    std::cout << "the range for double is from: " << std::numeric_limits<double>::min()
              << " to: " << std::numeric_limits<double>::max() << std::endl;
    std::cout << "the range for long double is from: " << std::numeric_limits<long double>::min()
              << " to: " << std::numeric_limits<long double>::max() << std::endl;

    std::cout << std::boolalpha;
    std::cout << "check if int is signed: "<< std::numeric_limits<int>::is_signed << std::endl;
    std::cout << "check total number of digits double can hold: " << std::numeric_limits<double>::digits << std::endl;

   return 0;
}
