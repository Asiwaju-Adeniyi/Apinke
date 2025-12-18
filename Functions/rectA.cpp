#include <iostream>
#include <iomanip>

double getLength(){
    double length;
    std::cout << "Enter rectangle's Length: " << std::endl;
    std::cin>> length;

    return length;
}

double getWidth() {
    double width;
    std::cout << "Enter rectangle's width: " << std::endl;
    std::cin>> width;

    return width;
}

double getArea(double length, double width) {
       return length * width;
}

void displayData(double length, double width, double area) {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Length: " << length
              << " Width: " << width
              << " Area: " << area << std::endl;
}


int main() {
     double l = getLength();
     double w = getWidth();
     double a = getArea(l,w);

     displayData(l, w, a);


    return 0;
}


