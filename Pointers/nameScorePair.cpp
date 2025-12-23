#include <iostream>
#include <iomanip>

using namespace std;


void inputScores(int* scores, string* names, int size) {
    for (int i = 0; i < size; i++) {
        do {
            cout << "Enter names and test score " << i + 1 << ": ";
            cin >> *(names + i) >> *(scores + i);

            if (*(scores + i) < 0) {
                cout << "Invalid input. Scores cannot be negative.\n";
            }
        } while (*(scores + i) < 0);
    }
}


void sortScores(int* scores, string* names, int size) {
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

        string tempName = *(names + i);
        *(names + i) = *(names + minIndex);
        *(names + minIndex) = tempName;
    }
}


double averageScore(int* scores, int size) {
    double total = 0;

    for (int i = 0; i < size; i++) {
        total += *(scores + i);
    }

    return total / size;
}


void displayScores(int* scores, string* names, int size) {
    cout << "\nSorted Test Scores:\n";
    for (int i = 0; i < size; i++) {
        cout << *(names + i) << " " << *(scores + i) << endl;
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
    std::string* names = new std::string[numScores];

    inputScores(scores, names, numScores);
    sortScores(scores, names, numScores);

    displayScores(scores, names, numScores);

    double avg = averageScore(scores, numScores);
    cout << fixed << setprecision(2);
    cout << "\nAverage Score: " << avg << endl;

    
    delete[] scores;
    delete[] names;

    return 0;
}
