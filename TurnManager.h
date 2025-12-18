#ifndef TURNMANAGER_H
#define TURNMANAGER_H

#include <vector>
#include "Unit.h"

class TurnManager {
private:
    std::vector<Unit*> turnOrder;

public:
    static int currentTurn;

    void addUnit(Unit* u);
    Unit* nextTurn();
};

#endif
