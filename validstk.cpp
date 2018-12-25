#include <iostream>

int main() {
    int cases = 0;
    std::cin >> cases;
    for (int t = 0; t < cases; t++) {
        int opc = 0;
        std::cin >> opc;
        int op;
        int items = 0;
        bool valid = true;
        for (int o = 0; o < opc; o++) {
            std::cin >> op;
            if (op == 0) {
                items--;
                if (items < 0) {
                    valid = false;
                }
            } else items++;
        }
        if (valid) {
            std::cout << "Valid" << std::endl;
        } else {
            std::cout << "Invalid" << std::endl;
        }
    }
    return 0;
}