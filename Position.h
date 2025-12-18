#ifndef POSITION_H
#define POSITION_H

#include <cmath>

class Position {
public:
    int x;
    int y;

    Position(int x = 0, int y = 0);

    bool operator==(const Position& other) const;
    bool operator>(const Position& other) const;
    double distance(const Position& other) const;
};

#endif
