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
int v, t;

std::cout << "What is the speed of the vehicle in mph? ";
std::cin >> v;
std::cout << "How many hours has it traveled? ";
std::cin >> t;

if (v < 0 || t < 1) {
    std::cout << "Invalid inputs. Speed must be non-negative and time must be at least 1 hour." << std::endl;
} else {
    std::cout << "Hour\tDistance Traveled (miles)" << std::endl;
    std::cout << "-------------------------------------" << std::endl;

    for (int hour{1}; hour <= t; ++hour) {
        int s = v * hour;
        std::cout << hour << std::setw(10) << s << std::endl;
    }
    }

    return 0;
}

