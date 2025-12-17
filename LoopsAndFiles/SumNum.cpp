#include <algorithm>
#include <functional>
#include <vector> 
#include <iostream>
#include <type_traits>
#include <iostream>
#include <cctype>
#include <cstring>
#include <cmath>

int main() {
    int posInt;
    int val;

    std::cout << "Enter a positive integer: ";
    std::cin >> posInt;

    if (posInt <= 0) {
        std::cout << "Please enter a valid positive integer." << std::endl;
        return 1;
    }

    if (posInt > 0) {
        int sum = 0;
        for (int i = 1; i <= posInt; ++i) {
            sum += i;
        }

        val = sum;
        std::cout << "The sum of all integers from 1 to " << posInt << " is:"  << val << std::endl;
    }

}
