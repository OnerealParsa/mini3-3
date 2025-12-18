#include "Position.h"

Position::Position(int x, int y) : x(x), y(y) {}

bool Position::operator==(const Position& other) const {
    return x == other.x && y == other.y;
}

bool Position::operator>(const Position& other) const {
    return distance(other) > 0;
}

double Position::distance(const Position& other) const {
    return std::sqrt(
        (x - other.x) * (x - other.x) +
        (y - other.y) * (y - other.y)
    );
}
