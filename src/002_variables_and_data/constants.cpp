#include <iostream>


//
const int val1{83}; // read-only can be runtime or compiler
constexpr int val2{34}; //
int val3{35};

// constexpr constinit double weight{33.33}; //doesn't work.


int main() {

    const int age{34};
    const float height{1.67f};

    // age = 55; //won't work

    std::cout << "age: " << age << std::endl;
    std::cout << "height: " << height << std::endl;

    // only work at compile with literals.
    constexpr int SOME_LIB_MAJOR_VERSION{123};
    constexpr int eye_count{2};
    constexpr double PI{3.14};

    std::cout << "SOME_LIB_MAJOR_VERSION: " << SOME_LIB_MAJOR_VERSION << std::endl;
    std::cout << "eye_count: " << eye_count << std::endl;
    std::cout << "PI: " << PI << std::endl;

    /*
     * compile checks
     * only works with const values.
     */
    static_assert(SOME_LIB_MAJOR_VERSION == 123);


    return 0;
}
