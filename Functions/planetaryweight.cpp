#include <algorithm>
#include <vector> 
#include <iostream>
#include <iomanip>

float calculateWeight(std::string name, float earthweight) {
    if (name == "Venus"){
        return earthweight * 0.905;
    } else if (name == "Mars") {
        return earthweight *  0.3787;
    } else if (name == "Jupiter"){
        return earthweight * 2.53;
    } else {
        std::cout << "Invalid planet name" << std::endl;
        return -1;
    }
}


int main() {

    std::string planetname;
    float weight;
    float planetweight;

    std::cout << "Enter the name of planet and weight of object on earth" << std::endl;
    std::cin >> weight >> planetname;
    
    planetweight = calculateWeight(planetname, weight);

    if (planetweight != -1) {
        std::cout << "The object's weight on " << planetname << " is: " << planetweight << std::endl;
    }

    return 0;
}

