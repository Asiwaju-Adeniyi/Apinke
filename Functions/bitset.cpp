#include <iostream> 
#include <bitset> 
#include <iomanip> 

const int  COLUMN_WIDTH {20};

int main() {

unsigned char value1{0x3};
unsigned char value2{0x5}; 

std::cout << value1 << std::endl;
std::cout << value2 << std::endl;

std::cout << std::setw(COLUMN_WIDTH) << "value1 :"
 << std::setw(COLUMN_WIDTH) << std::bitset<8>(value1) << std::endl;

std::cout << std::setw(COLUMN_WIDTH) << "value2 : " 
 << std::setw(COLUMN_WIDTH) << std::bitset<8>(value2) << std::endl;

 //AND 


return 0;
}
