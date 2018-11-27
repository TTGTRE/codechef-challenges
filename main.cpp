
#include <iostream>

#define KNIGHT_MOVES 8

struct Point {
    int x, y;

    Point(int x, int y);
};

Point::Point(int x, int y) {
    this->x = x;
    this->y = y;
}

struct MoveSet {
    Point *positions;

    int getSize();
};

int MoveSet::getSize() {
    return sizeof(positions);
}

struct ChessPiece {
    int x, y;
    MoveSet *moveSets;
};

int main() {

    int cases;
    int knightCount;
    ChessPiece *knightArray;
    ChessPiece king;
    MoveSet knightMoveSet;
    knightMoveSet.positions = new Point[KNIGHT_MOVES]{
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

    knightArray = new ChessPiece[knightCount];

    for (int a = 0; a < knightCount; a++) {
        ChessPiece knightPiece;
        std::cin >> knightPiece.x >> knightPiece.y;
        knightArray[a] = knightPiece;

        knightPiece.moveSets = &knightMoveSet;
    }

    std::cin >> king.x >> king.y;

    for (int a = 0; a < knightCount; a++) {
        for (int b = 0; b < KNIGHT_MOVES; b++) {
            printf("king x: %d, king y: %d\n", king.x, king.y);

            int xMove = knightArray[a].x + knightMoveSet.positions[b].x;
            int yMove = knightArray[a].y + knightMoveSet.positions[b].y;
            printf("knight x moves: %d, knight y moves: %d\n", xMove, yMove);

            if (king.x == xMove && king.y == yMove) {
                printf("YES");
                exit(0);
            }
        }
    }

    printf("NO");

    return 0;
}