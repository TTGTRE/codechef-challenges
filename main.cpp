
#include <iostream>

#define KNIGHT_MOVES 8

int main() {

    int cases;
    int knightCount;
    std::pair<int, int> *knightArray;
    std::pair<int,int > king;

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
        std::pair<int, int> knightPiece;
        std::cin >> knightPiece.first >> knightPiece.second;
        knightArray[a] = knightPiece;
    }

    std::cin >> king.first >> king.second;

    for (int a = 0; a < knightCount; a++) {
        for (int b = 0; b < KNIGHT_MOVES; b++) {
            printf("king x: %d, king y: %d\n", king.first, king.second);

            int xMove = knightArray[a].first + moveSet[b].first;
            int yMove = knightArray[a].second + moveSet[b].second;
            printf("knight x moves: %d, knight y moves: %d\n", xMove, yMove);

            if (king.first == xMove && king.second == yMove) {
                printf("YES");
                exit(0);
            }
        }
    }

    printf("NO");

    return 0;
}