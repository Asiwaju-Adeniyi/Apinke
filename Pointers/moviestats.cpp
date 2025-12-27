#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

// Function prototypes
void inputMovies(int* movies, int size);
double calculateAverage(int* movies, int size);
double calculateMedian(int* movies, int size);
int calculateMode(int* movies, int size);

int main() {
    int numStudents;

    cout << "Enter number of students surveyed: ";
    cin >> numStudents;

    while (numStudents <= 0) {
        cout << "Number of students must be greater than 0. Try again: ";
        cin >> numStudents;
    }

    // Dynamically allocate array
    int* movies = new int[numStudents];

    inputMovies(movies, numStudents);

    // Sort array for median and mode
    sort(movies, movies + numStudents);

    double average = calculateAverage(movies, numStudents);
    double median  = calculateMedian(movies, numStudents);
    int mode       = calculateMode(movies, numStudents);

    cout << fixed << setprecision(2);
    cout << "\nAverage movies watched: " << average << endl;
    cout << "Median movies watched: " << median << endl;

    if (mode == -1)
        cout << "Mode: No mode found" << endl;
    else
        cout << "Mode: " << mode << endl;

    // Free memory
    delete[] movies;

    return 0;
}

// Input function
void inputMovies(int* movies, int size) {
    for (int i = 0; i < size; i++) {
        do {
            cout << "Enter movies watched by student " << i + 1 << ": ";
            cin >> *(movies + i);

            if (*(movies + i) < 0) {
                cout << "Invalid input. Cannot be negative.\n";
            }
        } while (*(movies + i) < 0);
    }
}

// Average function
double calculateAverage(int* movies, int size) {
    double total = 0;

    for (int i = 0; i < size; i++) {
        total += *(movies + i);
    }

    return total / size;
}

// Median function (array must be sorted)
double calculateMedian(int* movies, int size) {
    if (size % 2 != 0) {
        return *(movies + size / 2);
    } else {
        return (*(movies + (size / 2 - 1)) + *(movies + size / 2)) / 2.0;
    }
}

// Mode function
int calculateMode(int* movies, int size) {
    int mode = -1;
    int maxCount = 1;

    for (int i = 0; i < size; i++) {
        int count = 1;

        for (int j = i + 1; j < size; j++) {
            if (*(movies + j) == *(movies + i)) {
                count++;
            }
        }

        if (count > maxCount) {
            maxCount = count;
            mode = *(movies + i);
        }
    }

    return mode;
}
