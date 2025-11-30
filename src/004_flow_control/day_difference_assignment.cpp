#include <iostream>


constexpr int monday{1};
constexpr int tuesday{2};
constexpr int wednesday{3};
constexpr int thursday{4};
constexpr int friday{5};
constexpr int saturday{6};
constexpr int sunday{7};

auto day_of_week(int day) {
    switch (day) {
        case monday:
            return "monday";
        case tuesday:
            return "tuesday";
        case wednesday:
            return "wednesday";
        case thursday:
            return "thursday";
        case friday:
            return "friday";
        case saturday:
            return "saturday";
        case sunday:
            return "sunday";
        default:
            return "invalid";
    }
}

int main() {
    int day;
    int days_past;

    std::cout << "which day is today? [1: monday,......, 7: sunday]" << std::endl;
    std::cin >> day;
    std::cout << "how many days have passed since today? " << std::endl;
    std::cin >> days_past;

    int day_passed = (day + days_past) % 7;
    std::cout << "today is " << day_of_week(day_passed) << "." << std::endl;
    std::cout << "if we went " << days_past << " days in the past, we would hit " << day_of_week(day_passed) << "."
              << std::endl;
}
