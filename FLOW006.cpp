#include <iostream>

int main() {
    int cases;
    std::cin >> cases;
    int a[cases + 1];
    bool first = true;
    for (int c = 0; c < cases + 1; c++) {
        int sum = 0;
        int ch;
        while ((ch = getchar()) != '\n') {

            sum += ch - '0';
        }
        if (first) {
            first = false;
            continue;
        }
        std::cout << sum << std::endl;
    }
}