#include <iostream>
#include <memory>
#include <cstdlib>

class Rectangle{
    private: 
    double width;
    double length;
    
    public: 
    Rectangle();
    void setWidth(double);
    void setLength(double);


    double getWidth() const {
        return width;
    };
    double getLength() const {
        return length;
    };
    double getArea() const {
        return width * length;
    };
};


Rectangle::Rectangle() {
    width = 0.0;
    length = 0.0;
}

void Rectangle::setWidth(double w) {
    if (w >= 0) {
        width = w;
    } else {
        std::cout << "Width cannot be negative. Setting width to 0." << std::endl;
        exit(EXIT_FAILURE);
    }
}

void Rectangle::setLength(double len) {
    if ( len >= 0) {
        length = len;
    } else {
        std::cout << "invalid length. Setting length to 0." << std::endl;
        exit(EXIT_FAILURE);
    }
    
}

int main() {
    Rectangle box;

    std::cout << "Here is the rectangle's default width: " << box.getWidth() << std::endl;
    std::cout << "Here is the rectangle's default length: " << box.getLength() << std::endl;
    std::cout << "Here is the rectangle's default area:" << box.getArea() << std::endl;

    return 0;
}
