#include <iostream>
#include <limits>

void ArrayFunc(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        while (true) {
            std::cout << "Enter element " << i + 1 << ": ";
            std::cin >> arr[i];

            if (std::cin) {
                break;
            }

            std::cout << "Invalid input. Please enter an integer.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

int main() {
    const int size = 15;
    int arr[size];
    ArrayFunc(arr, size);

    int biggest = std::numeric_limits<int>::min();
    int secondBiggest = std::numeric_limits<int>::min();


    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 && arr[i] > biggest) {
            biggest = arr[i];
        }
    }


    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0 &&
            arr[i] < biggest &&
            arr[i] > secondBiggest) {
            secondBiggest = arr[i];
        }
    }

    if (secondBiggest == std::numeric_limits<int>::min()) {
        std::cout << "Not enough even numbers.\n";
    } else {
        std::cout << "Biggest even: " << biggest << std::endl;
        std::cout << "Second biggest even: " << secondBiggest << std::endl;
    }

    return 0;
}
