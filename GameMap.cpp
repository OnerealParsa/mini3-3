#include "GameMap.h"
#include <iostream>
#include <vector>

GameMap::GameMap(int w, int h)
    : width(w), height(h) {
    grid.resize(height, std::vector<Unit*>(width, nullptr));
}

bool GameMap::isFree(Position p) const {
    if (p.x < 0 || p.y < 0 || p.x >= width || p.y >= height)
        return false;

    return grid[p.y][p.x] == nullptr;
}

bool GameMap::placeUnit(Unit* u, Position p) {
    if (!isFree(p)) return false;

    grid[p.y][p.x] = u;
    u->move(p);
    return true;
}

void GameMap::printMap() const {
    for (int y = 0; y < height; y++) {
        for (int x = 0; x < width; x++) {
            std::cout << (grid[y][x] ? "U " : ". ");
        }
        std::cout << '\n';
    }
}
