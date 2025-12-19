#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <fstream>

void ArrayFunc(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "Enter element " << i + 1 << std::endl;
        std::cin >> arr[i];

        if (!std::cin) {
            std::cout << "Invalid input. Please enter an integer." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

int main() {
    const int size = 15;
    int arr[size];
    ArrayFunc(arr, size);

    for (int value : arr) {
        std::cout << value << " ";
    }

    int biggest = 0;
    int secondBiggest = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > biggest && arr[i] % 2 == 0) {
            biggest = arr[i];
        }
}
   std::cout << "Biggest: " << biggest << std::endl;

    for (int i = 0; i < size; i++) {
        if (arr[i] <= biggest) {
            secondBiggest = arr[i];
        }

    }
    std::cout << "Second Biggest: " << secondBiggest << std::endl;

    return 0;

}



    
