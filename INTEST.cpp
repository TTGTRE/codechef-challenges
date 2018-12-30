#include <iostream>

int main() {
    int n, k;
    std::cin >> n >> k;
    int divisible = 0;
    for (int a = 0; a < n; a++) {
        int number;
        std::cin >> number;
        if (number % k == 0)divisible++;
    }
    std::cout << divisible << std::endl;
}