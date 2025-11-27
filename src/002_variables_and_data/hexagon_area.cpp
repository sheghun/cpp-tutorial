#include <cmath>
#include <iostream>


double hexagon_area() {


    double hex_area = ((3 * std::sqrt(3)) / 2) * std::pow(6.7, 2);
    // Your code will go above this line

    return hex_area;
}

int main() {
    double hex_area = hexagon_area();
    std::cout << std::fixed;
    std::cout << "Hexagon area: " << hex_area << std::endl;
}
