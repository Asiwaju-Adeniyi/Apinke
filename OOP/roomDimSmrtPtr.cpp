#include <iostream>
#include <iomanip>
#include <memory>
#include "Rectangle.h"



void Rectangle::setWidth(double w) {
    width = w;
}

void Rectangle::setLength(double len) {
    length = len;
}

double Rectangle::getWidth() const {
     return width;
}   

double Rectangle::getLength() const{
    return length;
}

double Rectangle::getArea() const{
    return width * length;
}



int main() {

double number;
double totalArea;

std::unique_ptr<Rectangle> kitchen(new Rectangle);
std::unique_ptr<Rectangle> bedroom(new Rectangle);
std::unique_ptr<Rectangle> den(new Rectangle);

std::cout << "enter kitchen length: " << "\n";
std::cin >> number;
kitchen->setLength(number);

std::cout << "enter kitchen width " << "\n";
std::cin >> number;
kitchen->setWidth(number);

std::cout << "enter den length: " << "\n";
std::cin >> number;
den->setLength(number);

std::cout << "enter den width " << "\n";
std::cin >> number;
den->setWidth(number);

std::cout << "enter bedroom length: " << "\n";
std::cin >> number;
bedroom->setLength(number);

std::cout << "enter bedroom width " << "\n";
std::cin >> number;
bedroom->setWidth(number);


totalArea = kitchen->getArea() + bedroom->getArea() + den->getArea();

std::cout << "Total Area for the 3 spaces: " << totalArea << std::endl;


return 0;

}
