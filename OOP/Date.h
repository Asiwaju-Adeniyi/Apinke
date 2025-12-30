#ifndef DATE_H
#define DATE_H

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

#endif