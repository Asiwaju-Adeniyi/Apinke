#include <iostream>
#include <iomanip>

class Rectangle{
    private: 
    double width;
    double length;
    
    public: 
    void setWidth(double);
    void setLength(double);
    double getWidth() const;
    double getLength() const;
    double getArea() const;
};

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
  Rectangle box;
  double rectWidth;
  double rectLength;

  std::cout << "What is the box's width: " << "\n";
  std::cin >> rectWidth;
  std::cout << "What is the box's length: \n";
  std::cin >> rectLength;

  box.setWidth(rectWidth);
  box.setLength(rectLength);


  std::cout << "Width: " << box.getWidth() << std::endl;
  std::cout << "Length: " << box.getLength() << std::endl;
  std::cout << "Area: " << box.getArea() << std::endl;

  return 0;  
  
}
