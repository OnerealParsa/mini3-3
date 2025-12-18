#include "GameMap.h"
#include "TurnManager.h"
#include "CombatEngine.h"
#include <iostream>

int main() {
    GameMap map(5, 5);

    Unit knight(1, "Knight", 100, 30, 10);
    Unit archer(2, "Archer", 70, 25, 5);

    map.placeUnit(&knight, Position(1, 1));
    map.placeUnit(&archer, Position(3, 3));

    TurnManager tm;
    tm.addUnit(&knight);
    tm.addUnit(&archer);

    std::cout << "Initial Map:\n";
    map.printMap();

    std::cout << "\nBattle Start!\n";
    CombatEngine::engage(knight, archer);

    knight.printStatus();
    archer.printStatus();

    return 0;
}
