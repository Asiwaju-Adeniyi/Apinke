#include <algorithm>
#include <vector> 
#include <iostream>
#include <iomanip>

float fallingDistance(float t){
    float d;
    const float g{9.8};
    d = 0.5f * g * t*t;
    return d;

}

int main() {
    std::cout << std::fixed << std::setprecision(2);

    for (int time = 1; time < 11; time++) {
        std::cout << "Time " << time
        << " s: " << fallingDistance(time)
        << " meters\n";
    }

    return 0;
    }


