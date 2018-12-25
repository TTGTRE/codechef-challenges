#include <iostream>

int main() {
    int cases;
    std::cin >> cases;
    for (int a = 0; a < cases; a++) {
        int days;
        std::cin >> days;
        int jafar_schedule[days][2];
        for (int b = 0; b < days; b++)std::cin >> jafar_schedule[b][0] >> jafar_schedule[b][1];
        int scenario_count;
        std::cin >> scenario_count;
        int scenario_array[scenario_count][2];
        for (int b = 0; b < scenario_count; b++) {
            std::cin >> scenario_array[b][0] >> scenario_array[b][1];
        }
        for (int b = 0; b < scenario_count; b++) {
            bool will_camp = false;
            int problems_done = 0;
            for (int c = 0; c < days; c++) {
                if (jafar_schedule[c][0] <= scenario_array[b][0] &&
                    (problems_done += jafar_schedule[c][1]) >= scenario_array[b][1]) {
                    will_camp = true;
                    break;
                }
            }
            if (will_camp) {
                std::cout << "Go Camp" << std::endl;
            } else { std::cout << "Go Sleep" << std::endl; }
        }
    }
}