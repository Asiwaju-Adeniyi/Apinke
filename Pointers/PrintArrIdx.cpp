#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <iomanip>

int main() {
    int size = 10;
    int arr[size] = {9, 14, 93, 64, 59, 26, 7, 18, 89, 124};

    std::cout << "The amount of bytes occupied by the array = " << sizeof(arr) << " bytes." << '\n';

    for (int i = 0; i < size; i++) {
        std::cout << "Element " << i + 1 << " is " << arr[i] << std::setw(7) << " with address " << &arr[i] << std::endl;
    }

    return 0;
}
