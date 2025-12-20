#include <iostream>
#include <string>
#include <limits>

void chipsSalsa(std::string salsa[], int jars[], int size) {
    for (int i = 0; i < size; i++) {
        while (true) {
            std::cout << "Enter jars sold for " << salsa[i] << ": ";
            std::cin >> jars[i];

            if (!std::cin || jars[i] < 0) {
                std::cout << "Invalid input. Enter a non-negative integer.\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            } else {
                break;
            }
        }
    }
}

int totalSales(int jars[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += jars[i];
    }
    return total;
}

int indexOfHighest(int jars[], int size) {
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (jars[i] > jars[index]) {
            index = i;
        }
    }
    return index;
}

int indexOfLowest(int jars[], int size) {
    int index = 0;
    for (int i = 1; i < size; i++) {
        if (jars[i] < jars[index]) {
            index = i;
        }
    }
    return index;
}

void report(std::string salsa[], int jars[], int size) {
    std::cout << "\n--- Salsa Sales Report ---\n";

    for (int i = 0; i < size; i++) {
        std::cout << salsa[i] << ": " << jars[i] << " jars\n";
    }

    int total = totalSales(jars, size);
    int high = indexOfHighest(jars, size);
    int low = indexOfLowest(jars, size);

    std::cout << "\nTotal sales: " << total << " jars\n";
    std::cout << "Highest selling salsa: " << salsa[high] << "\n";
    std::cout << "Lowest selling salsa: " << salsa[low] << "\n";
}

int main() {
    const int size = 5;
    std::string salsa[size] = {"Mild", "Medium", "Sweet", "Hot", "Zesty"};
    int jars[size];

    chipsSalsa(salsa, jars, size);
    report(salsa, jars, size);

    return 0;
}
