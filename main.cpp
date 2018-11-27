
#include <cstdio>
#include <iostream>

#define KNIGHT_MOVES 8

struct point {
    int x, y;

    point(int x, int y);
};

point::point(int x, int y) {
    this->x = x;
    this->y = y;
}

struct move_set {
    point *positions;

    int size();
};

int move_set::size() {
    return sizeof(positions);
}

struct piece {
    int x, y;
    move_set *_move_offsets;
};

int main() {

    int test_cases;
    int knight_num;
    piece *p_knight_arr;
    piece king;
    move_set _knight_moveset;
    _knight_moveset.positions = new point[KNIGHT_MOVES]{
            {-1, 2},
            {1,  2},
            {-1, -2},
            {1,  -2},
            {2,  1},
            {2,  -1},
            {-2, 1},
            {-2, -1}
    };

    std::cin >> test_cases;
    std::cout << test_cases << std::endl;

    std::cin >> knight_num;
    std::cout << knight_num << std::endl;

    p_knight_arr = new piece[knight_num];

    for (int a = 0; a < knight_num; a++) {
        piece _knight;
        std::cin >> _knight.x >> _knight.y;
        p_knight_arr[a] = _knight;
        std::cout << _knight.x << ", " << _knight.y << std::endl;

        _knight._move_offsets = &_knight_moveset;
    }

    //    for (int a = 0; a < knight_num; a++) {
//        std::cout << (p_knight_arr + a)->x << ", " << (p_knight_arr + a)->y << std::endl;
//    }

    std::cin >> king.x >> king.y;
    std::cout << king.x << ", " << king.y << std::endl;

    for (int a = 0; a < knight_num; a++) {
//        std::cout << "cycling";
        for (int b = 0; b < KNIGHT_MOVES; b++) {
//            std::cout << "cycling2";
            if (king.x == p_knight_arr[a]._move_offsets->positions[b].x
                && king.y == p_knight_arr[a]._move_offsets->positions[a].y) {
//                std::cout << "inside if";
//                printf("king x: %d, king y: %d", king.x, king.y);
//                printf("knight x: %d, knight y: %d", p_knight_arr[a]._move_offsets->positions[b].x, p_knight_arr[a]._move_offsets->positions[b].y);
                printf("YES");
//                std::cout << "finished" << std::endl;
                exit(0);
            }
        }
    }

    printf("NO");

    return 0;
}