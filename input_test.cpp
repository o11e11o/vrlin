#include <iostream>

int main () {
    std::cout << "SIEFJO";
    int bob;
    std::cin >> bob;

    std::cout << bob;
    if (std::cin.fail()) { 
     std::cout << "data entered is not of int type"; 
 }

    return 0;
}