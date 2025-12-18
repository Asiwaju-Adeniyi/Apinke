#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>

int EmployeeNum() {
    int EmployeeNum;
    std::cout << "What is the number of employees in the company?/n";
    std::cin >> EmployeeNum;

    do { std::cout << "Enter a valid Number./n"; 
    std::cin >> EmployeeNum;} while(EmployeeNum < 1);

    return EmployeeNum;
}

int totalAbsDays(int NumEmployee) {
    int AbsDays = 0;
    int total;
    for (int i = 0; i <= NumEmployee; i++) {
        do {std::cout << "Enter the number of days missed by employee: " << i << "/n";
    std::cin >> AbsDays;} while (AbsDays < 0);}

    total += AbsDays;

    return AbsDays;
}

double avgTotalAbsDays(int EmployeeNum, int AbsDays) {
    return static_cast<double> (AbsDays) / EmployeeNum;
}


int main() {
    int N = EmployeeNum();
    int Abs =  totalAbsDays(N);
    double Average = avgTotalAbsDays(N, Abs);


    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nAverage days absent per employee: "
              << Average << std::endl;

    return 0;
}



