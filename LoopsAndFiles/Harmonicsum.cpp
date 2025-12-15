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
double H = 0.0;
int n;

std::cout << "Enter number of elements in the Harmonic series: ";
std::cin >> n;

if (n <= 0) {
    std::cout << "Please enter a positive integer." << std::endl;
    return 1;
}

for (int i = 1; i < n; ++i) {
    H += 1.0 / i;
}

std::cout << std::fixed << std::setprecision(4) << H << std::endl;

return 0;

}
