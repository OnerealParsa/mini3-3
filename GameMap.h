#ifndef GAMEMAP_H
#define GAMEMAP_H

#include <vector>
#include "Unit.h"

class GameMap {
private:
    int width;
    int height;
    std::vector<std::vector<Unit*>> grid;

public:
    GameMap(int w, int h);
    bool isFree(Position p) const;
    bool placeUnit(Unit* u, Position p);
    void printMap() const;
};

#endif
