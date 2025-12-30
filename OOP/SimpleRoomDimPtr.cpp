#include <iostream>
#include <iomanip>
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
Rectangle *bedroom = nullptr;
Rectangle *den = nullptr;
Rectangle *kitchen = nullptr;

bedroom = new Rectangle;
den = new Rectangle;
kitchen = new Rectangle;


std::cout << "kitchen length: \n";
std::cin >> number;
kitchen->setLength(number);

std::cout << "kitchen width: \n";
std::cin >> number;
kitchen->setWidth(number);



std::cout << "bedroom length: \n";
std::cin >> number;
bedroom->setLength(number);

std::cout << "bedroom width: \n";
std::cin >> number;
bedroom->setWidth(number);



std::cout << "den length: \n";
std::cin >> number;
den->setLength(number);

std::cout << "den width: \n";
std::cin >> number;
den->setWidth(number);



std::cout << "Kitchen's width and length are: " << kitchen->getWidth() << " " << kitchen->getLength() << std::endl;
std::cout << "bedroom's width and length are: " << bedroom->getWidth() << " " << bedroom->getLength() << std::endl;
std::cout << "den's width and length are: " << den->getWidth() << " " << den->getLength() << std::endl;

double TotalArea = den->getArea() + kitchen->getArea() + bedroom->getArea();

std::cout << "Total area of the four spaces: " << TotalArea << std::endl;

delete bedroom;
delete den;
delete kitchen;

kitchen = nullptr;
den = nullptr;
bedroom = nullptr;

return 0;

}
