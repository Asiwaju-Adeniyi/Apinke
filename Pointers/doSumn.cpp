#include <iostream>
#include <string>
#include <limits>
#include <vector>
#include <iomanip>

int doSomething(int* x, int *y) {
    int temp = *x;
    *x = *y * 10;
    *y = temp * 10;

    return *y + *x;
}

int main() {
    int x = 98, y = 87;

    int *ptrx = &x;
    int *ptry = &y;

    doSomething(ptrx, ptry);

    std::cout << "Values pointers x and pointer y point to are: " << *ptrx << " and " << *ptry << std::endl;

    return 0;
}
