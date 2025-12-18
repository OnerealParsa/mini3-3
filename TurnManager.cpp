#include "TurnManager.h"

int TurnManager::currentTurn = -1;

void TurnManager::addUnit(Unit* u) {
    turnOrder.push_back(u);
}

Unit* TurnManager::nextTurn() {
    if (turnOrder.empty()) return nullptr;

    currentTurn = (currentTurn + 1) % turnOrder.size();
    return turnOrder[currentTurn];
}
