#include <iostream>

int main() {
    double length{0.0};
    double width{0.0};
    double height{0.0};

    std::cout << "welcome to box calculator. please type in length, width and height information: " << std::endl;
    std::cout << "length: ";
    std::cin >> length;
    std::cout << "width: ";
    std::cin >> width;
    std::cout << "height: ";
    std::cin >> height;

    double base_area{width * length};
    double volume{base_area * height};

    std::cout << "the base area is: " << base_area << std::endl;
    std::cout << "the volume is: " << volume << std::endl;
}
