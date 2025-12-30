#include <iostream>
#include <iomanip>
#include <memory>
#include "Date.h"



void Date::setDay(int d){
    day = d;
}

void Date::setMonth(int m){
    month = m;
}

void Date::setYear(int y) {
    year = y;
}

    int Date::getDay() const { return day;};
    int Date::getMonth() const { return month;};
    int Date::getYear() const { return year;};



    int main() {
        int number;
        

        std::unique_ptr<Date> dayPtr(new Date);
        std::unique_ptr<Date> monthPtr(new Date);
        std::unique_ptr<Date> yearPtr(new Date);

        std::cout << "Enter day: ";
        std::cin >> number;
        dayPtr->setDay(number);

        std::cout << "Enter month: ";
        std::cin >> number;
        monthPtr->setMonth(number);

        std::cout << "Enter year: ";
        std::cin >> number;
        yearPtr->setYear(number);

        std::cout << "The date is: "
                  << std::setfill('0') << std::setw(2) << dayPtr->getDay() << "/"
                  << std::setfill('0') << std::setw(2) << monthPtr->getMonth() << "/"
                  << yearPtr->getYear() << std::endl;

        return 0;




    }
