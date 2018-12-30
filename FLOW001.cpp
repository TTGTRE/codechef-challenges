#include <iostream>

int main() {
    int cases;
    std::cin >> cases;
    for (int c = 0; c < cases; c++) {
        int firstNum, secondNum;
        std::cin >> firstNum >> secondNum;
        std::cout << firstNum + secondNum << std::endl;
    }
}