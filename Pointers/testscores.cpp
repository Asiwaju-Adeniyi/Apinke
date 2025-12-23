#include <iostream>
#include <iomanip>
using namespace std;


void inputScores(int* scores, int size) {
    for (int i = 0; i < size; i++) {
        do {
            cout << "Enter test score " << i + 1 << ": ";
            cin >> *(scores + i);

            if (*(scores + i) < 0) {
                cout << "Invalid input. Scores cannot be negative.\n";
            }
        } while (*(scores + i) < 0);
    }
}


void sortScores(int* scores, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < size; j++) {
            if (*(scores + j) < *(scores + minIndex)) {
                minIndex = j;
            }
        }

        int temp = *(scores + i);
        *(scores + i) = *(scores + minIndex);
        *(scores + minIndex) = temp;
    }
}

double averageScore(int* scores, int size) {
    double total = 0;

    for (int i = 0; i < size; i++) {
        total += *(scores + i);
    }

    return total / size;
}


void displayScores(int* scores, int size) {
    cout << "\nSorted Test Scores:\n";
    for (int i = 0; i < size; i++) {
        cout << *(scores + i) << endl;
    }
}

int main() {
    int numScores;

    cout << "How many test scores? ";
    cin >> numScores;

    while (numScores <= 0) {
        cout << "Enter a valid number greater than 0: ";
        cin >> numScores;
    }

   
    int* scores = new int[numScores];

    inputScores(scores, numScores);
    sortScores(scores, numScores);

    displayScores(scores, numScores);

    double avg = averageScore(scores, numScores);
    cout << fixed << setprecision(2);
    cout << "\nAverage Score: " << avg << endl;

   
    delete[] scores;

    return 0;
}
