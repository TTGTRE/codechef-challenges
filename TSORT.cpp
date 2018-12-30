#include <iostream>
#include <algorithm>

int main() {
    int lc;
    std::cin >> lc;
    int a[lc];
    for (int l = 0; l < lc; l++) {
        std::cin >> a[l];
    }
    std::sort(a, a + lc);
    for (int n:a) {
        std::cout << n << " ";
    }
}