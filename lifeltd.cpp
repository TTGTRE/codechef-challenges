#include <iostream>

#define SIZE_3 3

int main() {
    int case_count;
    std::cin >> case_count;
    int *answer_array = new int[case_count]{0};
    for (int current_case = 0; current_case < case_count; current_case++) {
        char line_array[SIZE_3][SIZE_3];
        for (int line = 0; line < SIZE_3; line++) {
            std::cin >> line_array[line][0] >> line_array[line][1] >> line_array[line][2];
        }
        bool valid_ = false;
        for (int line = 0; line < 3; line++) {
            for (int column = 0; column < 3; column++) {
                if (line_array[line][column] == 'l' && line_array[line + 1][column] == 'l' &&
                    line_array[line + 1][column + 1] == 'l') {
                    valid_ = true;
                    break;
                }
            }
        }
        if (valid_)answer_array[current_case] = 1;
    }
    for (int c = 0; c < case_count; c++) {
        if (*(answer_array + c) == 0)std::cout << "no" << std::endl;
        else std::cout << "yes" << std::endl;
    }
    return 0;
}
