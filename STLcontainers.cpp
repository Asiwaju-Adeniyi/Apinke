#include <iostream>
#include <vector>
#include <deque>
#include <array>
#include <list>
#include <forward_list>
#include <algorithm>

int main() {
    std::array<int, 10> Agbero = {1, 23, 45, 12, 67, 89, 34, 56, 78, 90};

    std::cout << "Stage 1 (Array):" << std::endl;
    for (int x : Agbero) {
        std::cout << x << " ";
    }
    std::cout << "\n\n";

    std::vector<int> Auxiliary(Agbero.begin(), Agbero.end());
    Auxiliary.push_back(100);
    Auxiliary.push_back(200);

    std::cout << "Stage 2 (Vector):" << std::endl;
    for (int x : Auxiliary) {
        std::cout << x << " ";
    }
    std::cout << "\n\n";

    std::deque<int> elewiOmo(Auxiliary.begin(), Auxiliary.end());
    elewiOmo.push_front(-10);
    elewiOmo.push_back(300);

    std::cout << "Stage 3 (Deque):" << std::endl;
    for (int x : elewiOmo) {
        std::cout << x << " ";
    }
    std::cout << "\n\n";

    std::list<int> sundayIgboho(elewiOmo.begin(), elewiOmo.end());
    sundayIgboho.sort();

    std::cout << "Stage 4 (List - Sorted):" << std::endl;
    for (int x : sundayIgboho) {
        std::cout << x << " ";
    }
    std::cout << "\n\n";

    std::forward_list<int> Asiwaju(sundayIgboho.begin(), sundayIgboho.end());
    Asiwaju.remove_if([](int x){ return x < 50; });

    std::cout << "Stage 5 (Forward List - After Removal < 50):" << std::endl;
    for (int x : Asiwaju) {
        std::cout << x << " ";
    }
    std::cout << "\n\n";

    return 0;
}
