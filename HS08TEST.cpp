#include <iostream>
#include <iomanip>

int main() {
    float withdrawAmount, startBalance;
    std::cin >> withdrawAmount;
    std::cin >> startBalance;
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    if (static_cast<int>(withdrawAmount) % 5 == 0 && startBalance > withdrawAmount + 0.50f) {
        float resultBalance = startBalance - withdrawAmount - 0.50f;
        std::cout << resultBalance << std::endl;
    } else {
        std::cout << startBalance << std::endl;
    }
    return 0;
}