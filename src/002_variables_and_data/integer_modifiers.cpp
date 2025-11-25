#include <iostream>


int main() {

    int value1{10};
    int value2{-300};

    short value3 = {433};
    short signed value4 = {-1000};

    long value5 = {1000000000};
    long long value6 = {-1000000000000};
    long long signed value7 = {-1000000000000};

    std::cout << "value1: " << value1 << " size: " << sizeof(value1) << std::endl;
    std::cout << "value2: " << value2 << " size: " << sizeof(value2) << std::endl;

    std::cout << "value3: " << value3 << " size: " << sizeof(value3) << std::endl;
    std::cout << "value4: " << value4 << " size: " <<sizeof(value4) << std::endl;

    std::cout << "value5: " << value5 << " size: " << sizeof(value5) << std::endl;
    std::cout << "value6: " << value6 << " size: " << sizeof(value6) << std::endl;
    std::cout << "value7: " << value7 << " size: " << sizeof(value7) << std::endl;



    return 0;
}
