#include <iostream>

double calculateRetail(double wholesalePrice, double markupPercentage) {
    if (wholesalePrice < 0 || markupPercentage < 0) {
        std::cout << "Wholesale price and markup percentage cannot be negative.\n";
        return 0.0;
    }

    double markup = wholesalePrice * (markupPercentage / 100.0);
    return wholesalePrice + markup;
}


int main() {
    double price;
    double markup;

    std::cout << "Enter wholesale price and markup percentage: ";
    std::cin >> price >> markup;

    double retailPrice = calculateRetail(price, markup);

    std::cout << "The retail price is: " << retailPrice << std::endl;

    return 0;
}
