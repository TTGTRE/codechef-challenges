
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
    std::cout << cases << std::endl;

    std::cin >> knightCount;
    std::cout << knightCount << std::endl;

    knightArray = new ChessPiece[knightCount];

    for (int a = 0; a < knightCount; a++) {
        ChessPiece knightPiece;
        std::cin >> knightPiece.x >> knightPiece.y;
        knightArray[a] = knightPiece;
        std::cout << knightPiece.x << ", " << knightPiece.y << std::endl;

        knightPiece.moveSets = &knightMoveSet;
    }

    //    for (int a = 0; a < knightCount; a++) {
//        std::cout << (knightArray + a)->x << ", " << (knightArray + a)->y << std::endl;
//    }

    std::cin >> king.x >> king.y;
    std::cout << king.x << ", " << king.y << std::endl;

    for (int a = 0; a < knightCount; a++) {
        for (int b = 0; b < KNIGHT_MOVES; b++) {
            printf("king x: %d, king y: %d\n", king.x, king.y);
            printf("knight x: %d, knight y: %d\n", knightArray[a].moveSets->positions[b].x, knightArray[a].moveSets->positions[b].x);
//            if (king.x == knightArray[a].moveSets->positions[b].x
//                && king.y == knightArray[a].moveSets->positions[a].y) {
//                std::cout << "inside if";
//                printf("king x: %d, king y: %d", king.x, king.y);
//                printf("knight x: %d, knight y: %d", knightArray[a].moveSets->positions[b].x, knightArray[a].moveSets->positions[b].y);
//                printf("YES");
//                std::cout << "finished" << std::endl;
//                exit(0);
//            }
        }
    }

    printf("NO");

    return 0;
}