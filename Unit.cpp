#include "Unit.h"
#include <iostream>
#include <algorithm>

Unit::Unit(int id, std::string name, int hp, int atk, int def)
    : id(id), name(name), hp(hp),
      attackPower(atk), defensePower(def) {}

Unit::~Unit() {}

void Unit::move(Position p) {
    pos = p;
}

void Unit::attack(Unit& other) {
    int damage = std::max(0, attackPower - other.defensePower);
    other.hp -= damage;
}

bool Unit::isAlive() const {
    return hp > 0;
}

Position Unit::getPosition() const {
    return pos;
}

void Unit::printStatus() const {
    std::cout << "Unit[" << id << "] "
              << name
              << " | HP=" << hp
              << " | ATK=" << attackPower
              << " | DEF=" << defensePower
              << " | Pos(" << pos.x << "," << pos.y << ")\n";
}
