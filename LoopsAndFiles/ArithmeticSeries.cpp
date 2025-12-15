#include <algorithm>
#include <functional>
#include <vector> 
#include <iostream>
#include <type_traits>
#include <iostream>
#include <cctype>
#include <cstring>
#include <cmath>
#include <iomanip>

int main() {
double v1, v2;
int Vn;

std::cout << "Enter two values v1 and v2, and the number of values Vn: ";
std::cin >> v1 >> v2 >> Vn;

std::cout << std::endl;

if (Vn <= 0) {
    std::cerr << "Vn must be greater than 1. Exiting." << std::endl;
    return 1;
}
double step = v2 - v1;

for (int i = 0; i < Vn; i++) {
    double term = v1 + i * step;

    std::cout << term << std::endl;
}
return 0;

}
