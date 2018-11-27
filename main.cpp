
#include <iostream>

int main() {

    const int KNIGHT_MOVES = 8;

    int cases;
    int knightCount;
    std::pair<int, int> *knightArray;
    std::pair<int, int> king;

    /* All the move offsets of a knight from their current positions */
    std::pair<int, int> *moveSet = new std::pair<int, int>[KNIGHT_MOVES]{
            {-1, 2},
            {1,  2},
            {-1, -2},
            {1,  -2},
            {2,  1},
            {2,  -1},
            {-2, 1},
            {-2, -1}
    };

    std::cin >> cases;

    std::cin >> knightCount;
    knightArray = new std::pair<int, int>[knightCount];

    for (int a = 0; a < knightCount; a++) {
        std::cin >> knightArray[a].first >> knightArray[a].second;
    }

    std::cin >> king.first >> king.second;

    for (int a = 0; a < knightCount; a++) {
        for (int b = 0; b < KNIGHT_MOVES; b++) {

            printf("king x: %d, king y: %d\n", king.first, king.second);

            int xMove = knightArray[a].first + moveSet[b].first;
            int yMove = knightArray[a].second + moveSet[b].second;

            if (king.first == xMove && king.second == yMove) {
                std::cout << "YES" << std::endl;
                exit(0);
            }
        }
    }

    std::cout << "NO" << std::endl;

    return 0;
}