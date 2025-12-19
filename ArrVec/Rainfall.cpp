#include <iostream>
#include <iomanip>

const int MONTHS = 12;

void getRainfall(double rainfall[], int size) {
    for (int i = 0; i < size; i++) {
        do {
            std::cout << "Enter rainfall for month " << i + 1 << ": ";
            std::cin >> rainfall[i];

            if (rainfall[i] < 0) {
                std::cout << "Rainfall cannot be negative. Try again.\n";
            }
        } while (rainfall[i] < 0);
    }
}


double getTotalRainfall(const double rainfall[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += rainfall[i];
    }
    return total;
}


double getAverageRainfall(const double rainfall[], int size) {
    return getTotalRainfall(rainfall, size) / size;
}


int getHighestMonth(const double rainfall[], int size) {
    int highestIndex = 0;

    for (int i = 1; i < size; i++) {
        if (rainfall[i] > rainfall[highestIndex]) {
            highestIndex = i;
        }
    }
    return highestIndex;
}


int getLowestMonth(const double rainfall[], int size) {
    int lowestIndex = 0;

    for (int i = 1; i < size; i++) {
        if (rainfall[i] < rainfall[lowestIndex]) {
            lowestIndex = i;
        }
    }
    return lowestIndex;
}

int main() {
    double rainfall[MONTHS];

    getRainfall(rainfall, MONTHS);

    double total = getTotalRainfall(rainfall, MONTHS);
    double average = getAverageRainfall(rainfall, MONTHS);
    int highestMonth = getHighestMonth(rainfall, MONTHS);
    int lowestMonth = getLowestMonth(rainfall, MONTHS);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nTotal rainfall: " << total << std::endl;
    std::cout << "Average monthly rainfall: " << average << std::endl;
    std::cout << "Highest rainfall was in month " << highestMonth + 1 << std::endl;
    std::cout << "Lowest rainfall was in month " << lowestMonth + 1 << std::endl;

    return 0;
}
