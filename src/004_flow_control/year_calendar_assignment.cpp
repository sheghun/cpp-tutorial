#include <iomanip>
#include <iostream>

constexpr short monday{1};
constexpr short tuesday{2};
constexpr short wednesday{3};
constexpr short thursday{4};
constexpr short friday{5};
constexpr short saturday{6};
constexpr short sunday{7};


int main() {
    int year;
    int day;
    constexpr short column_width{10};

    std::cout << "enter a year: ";
    std::cin >> year;
    std::cout << "enter the first day of the year: ";
    std::cin >> day;

    for (short unsigned i = 1; i <= 12; i++) {
        // render january
        switch (i) {
            case 1:
                std::cout << "-- january " << year << " --\n";
                break;
            case 2:
                std::cout << "-- february " << year << " --\n";
                break;
            case 3:
                std::cout << "-- march " << year << " --\n";
                break;
            case 4:
                std::cout << "-- april " << year << " --\n";
                break;
            case 5:
                std::cout << "-- may " << year << " --\n";
                break;
            case 6:
                std::cout << "-- june " << year << " --\n";
                break;
            case 7:
                std::cout << "-- july " << year << " --\n";
                break;
            case 8:
                std::cout << "-- august " << year << " --\n";
                break;
            case 9:
                std::cout << "-- september " << year << " --\n";
                break;
            case 10:
                std::cout << "-- october " << year << " --\n";
                break;
            case 11:
                std::cout << "-- november " << year << " --\n";
                break;
            case 12:
                std::cout << "-- december " << year << " --\n";
                break;
            default:
                std::cout << "invalid month" << std::endl;
                return 0;
        }

        // log monday through sun in a tabular form using column width with setw
        std::cout << std::setw(column_width) << "mon" << std::setw(column_width) << "tue" << std::setw(column_width)
                  << "wed" << std::setw(column_width) << "thu" << std::setw(column_width) << "fri"
                  << std::setw(column_width) << "sat" << std::setw(column_width) << "sun" << "\n";


        // loop through the days of the week start with the day using switch to log monday through friday
        for (short unsigned j = 1; j <= 31; j++, day++) {

            day = day > 7 ? 1 : day;

            if (i == 2 && j > 28 && year % 4 != 0) {
                break;
            }

            if (i == 2 && j > 29 && year % 4 == 0) {
                break;
            }

            if (i == 4 || i == 6 || i == 9 || i == 11) {
                if (j > 30) {
                    break;
                }
            }

            std::cout << std::setw(column_width);

            if (day == monday) {
                std::cout << j;
            }

            std::cout << std::setw(column_width);

            if (day == tuesday) {
                if (j == 1) {
                    std::cout << std::setw(column_width * 2) << j;
                } else {

                    std::cout << j;
                }
            }


            std::cout << std::setw(column_width);

            if (day == wednesday) {
                if (j == 1) {
                    std::cout << std::setw(column_width * 3) << j;
                } else {
                    std::cout << j;
                }
            }


            std::cout << std::setw(column_width);

            if (day == thursday) {
                if (j == 1) {
                    std::cout << std::setw(column_width * 4) << j;
                } else {
                    std::cout << j;
                }
            }


            std::cout << std::setw(column_width);

            if (day == friday) {
                if (j == 1) {
                    std::cout << std::setw(column_width * 5) << j;
                } else {
                    std::cout << j;
                }
            }

            std::cout << std::setw(column_width);

            if (day == saturday) {
                if (j == 1) {
                    std::cout << std::setw(column_width * 6) << j;
                } else {
                    std::cout << j;
                }
            }

            std::cout << std::setw(column_width);

            if (day == sunday) {
                if (j == 1) {
                    std::cout << std::setw(column_width * 7) << j << "\n";
                } else {
                    std::cout << j << "\n";
                }
            }
        }
        std::cout << "\n\n";
    }


    return 0;
}
