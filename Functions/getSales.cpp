#include <algorithm>
#include <vector> 
#include <iostream>
#include <iomanip>

double getSales() {

    double div;
    std::cout << "Enter your division's quarterly sales figure: " << std::endl;
    std::cin >> div;
    if (div <= 0.00) {
        return 0;
        }
    
    
    return div;
}

void findHighest(double ne, double se, double nw, double sw) {
    double highest = ne;
    std::string name = "Northeast";

    if (se > highest) { highest = se; name = "Southeast"; }
    if (nw > highest) { highest = nw; name = "Northwest"; }
    if (sw > highest) { highest = sw; name = "Southwest"; }

    std::cout << "Highest sales division: " << name
              << " ($" << highest << ")\n";
}


int main(){
    double Northeast = getSales();
    double Southeast = getSales();
    double Northwest = getSales();
    double Southwest = getSales();

    findHighest(Northeast, Southeast, Northwest, Southwest);

    return 0;
}



