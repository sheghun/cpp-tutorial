#include <iostream>


int main() {
    auto var1 {12};
    auto var2 {13.0};
    auto var3 {14.0f};
    auto var4 {15.0l};
    auto var5 {'e'};

    // int modifier suffixes
    auto var6 {123u}; //unsigned
    auto var7 {123ul}; //unsigned long
    auto var8 {123ull}; //unsigned long long

    auto var9 {333u};

    std::cout << "var1 occupies: " << sizeof(var1) << " bytes. type: " << typeid(var2).name()  << std::endl;
    std::cout << "var2 occupies: " << sizeof(var2) << " bytes. type: "  << typeid(var2).name() << std::endl;
    std::cout << "var3 occupies: " << sizeof(var3) << " bytes. type: "  << typeid(var3).name() << std::endl;
    std::cout << "var4 occupies: " << sizeof(var4) << " bytes. type: "  << typeid(var4).name() << std::endl;
    std::cout << "var5 occupies: " << sizeof(var5) << " bytes. type: "  << typeid(var5).name() << std::endl;
    std::cout << "var6 occupies: " << sizeof(var6) << " bytes. type: "  << typeid(var6).name() << std::endl;
    std::cout << "var7 occupies: " << sizeof(var7) << " bytes. type: "  << typeid(var7).name() << std::endl;
    std::cout << "var8 occupies: " << sizeof(var8) << " bytes. type: "  << typeid(var8).name() << std::endl;

    // var9 = -22; // undefined behaviour. undefined value;

    std::cout << "var9 occupies: " << sizeof(var9) << " bytes. type: "  << typeid(var9).name() << " value: " << var9 << std::endl;

}