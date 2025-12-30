#include <iostream>
#include <iomanip>
#include <memory>

class Date{
    private: 
    int day;
    int month;
    int year;

    public: 

    void setDay(int d);
    void setMonth(int m);
    void setYear(int y);
    int getDay() const;
    int getMonth() const;
    int getYear() const;
};

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
