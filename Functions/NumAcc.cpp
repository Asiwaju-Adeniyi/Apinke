#include <algorithm>
#include <vector> 
#include <iostream>
#include <iomanip>

int getNumAccidents() {
    int autoAccNo;

    do{ std::cout << " What's the number of automobile accidents reported in that region during the last year?";
    std::cin >> autoAccNo;
        if (autoAccNo < 0) {
            std::cout << "automobile accidents can't be negative.";
        }
    } while (autoAccNo < 0);

    return autoAccNo;
}

void findLowest(int N, int S, int E, int W, int C) {
    int lowest = N;
    std::string name = "North";

    if (S < lowest) { lowest = S; name = "South";}
    if (E < lowest) { lowest = E; name = "East";}
    if (W < lowest) { lowest = W; name = "West";}
    if (C < lowest) { lowest = C; name = "Central";}

       std::cout << "The safest region is " << name
              << " with " << lowest << " accidents.\n";

}

int main(){
    int North = getNumAccidents();
    int South = getNumAccidents();
    int West = getNumAccidents();
    int East = getNumAccidents();
    int Central = getNumAccidents();

    findLowest(North, South, East, West, Central);

    return 0;
}



