#include <cstdlib>
#include <iostream>
#include <ctime>

void coinToss() {
    int randomNumber = (std::rand() % 2) + 1;

    if (randomNumber == 1) {
        std::cout << "heads" << std::endl;
    } else {
        std::cout << "tails" << std::endl;
    }
}

int main() {
    int numTosses;

    
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    
    do {
        std::cout << "How many times should the coin be tossed? ";
        std::cin >> numTosses;
    } while (numTosses <= 0);

    
    for (int i = 1; i <= numTosses; i++) {
        coinToss();
    }

    return 0;
}
