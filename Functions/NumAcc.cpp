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
    int highest = N;
    std::string name = "North";

    if (S > N) { highest = S; name = "South";}
    if (E > N) {highest = N; name = "North";}
    if (W > N) {highest = W; name = "West";}
    if (C > N) {highest = C; name = "Central";}

    std::cout << "The area with the highest number of automobile accidents is " << name << ", with " << highest << " accidenets." << std::endl;

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



