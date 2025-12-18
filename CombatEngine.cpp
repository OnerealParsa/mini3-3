#include "CombatEngine.h"

void CombatEngine::engage(Unit& a, Unit& b) {
    if (!a.isAlive() || !b.isAlive()) return;

    a.attack(b);
    if (b.isAlive())
        b.attack(a);
}
