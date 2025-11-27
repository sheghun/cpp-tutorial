#include <iostream>

int main() {
    short int var1 {10}; // 16 bits (2 bytes)
    short int var2 {20};

    char var3 {40}; // 1
    char var4 {50};

    std::cout << "size of var1: " << sizeof(var1) << std::endl;
    std::cout << "sized of var2: " << sizeof(var2) << std::endl;
    std::cout << "size of var3: " << sizeof(var3) << std::endl;
    std::cout << "size of var4: " << sizeof(var4) << std::endl;

    auto result1 = var1 + var2;
    auto result2 = var3 + var4;

    std::cout << "result1: "<< result1<< " size of result1: " << sizeof(result1) << std::endl;
    std::cout <<"result2: " << result2 <<  " size of result2: " << sizeof(result2) << std::endl;
}