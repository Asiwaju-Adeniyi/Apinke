#include <algorithm>
#include <functional>
#include <vector> 
#include <iostream>
#include <type_traits>
#include <iostream>
#include <cctype>
#include <cstring>
#include <cmath>

int main() {
    int month, year;
    bool isLeapYear = false;

    std::cout << "Enter the month (1-12): " << std::endl;
    std::cin >> month;

    std::cout << "Enter a year: " << std::endl;
    std::cin >> year;

    if (year % 100 == 0) {
        if (year % 400 == 0) {
            isLeapYear = true;
            std::cout << "This is a leap year." << std::endl;
        }
    } else if (year % 4 == 0) {
        isLeapYear = true;
        std::cout << "This is a leap year." << std::endl;
    }

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: 
            std::cout << "This month has 31 days." << std::endl;
            break;
            case 4: case 6: case 9: case 11:
            std::cout << "This month has 30 days." << std::endl;
            break;
        case 2: 
        if (isLeapYear) {
            std::cout << "29 days." << std::endl;
        } else {
            std::cout << "28 days." << std::endl;
        }
    }

    return 0;

}
