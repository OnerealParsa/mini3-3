#ifndef UNIT_H
#define UNIT_H

#include <string>
#include "Position.h"

class Unit {
protected:
    int id;
    std::string name;
    int hp;
    int attackPower;
    int defensePower;
    Position pos;

public:
    Unit(int id, std::string name, int hp, int atk, int def);
    virtual ~Unit();

    virtual void move(Position p);
    virtual void attack(Unit& other);
    bool isAlive() const;
    Position getPosition() const;
    void printStatus() const;
};

#endif
