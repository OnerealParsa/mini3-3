# Mini Project 3-3 — Turn-Based Combat (C++)

A university assignment in C++ that implements a small turn-based combat game on a grid map: units with combat attributes move and fight on the map, with a dedicated engine resolving the combat and a manager handling turn order.

## Classes

| Class | Responsibility |
|---|---|
| `Unit` | A fighting unit with combat attributes |
| `Position` | A point on the map grid |
| `GameMap` | The battlefield grid |
| `CombatEngine` | Resolves combat between units |
| `TurnManager` | Manages the turn order |

## Build & Run

```bash
g++ -std=c++17 -O2 -o combat main.cpp Unit.cpp Position.cpp GameMap.cpp CombatEngine.cpp TurnManager.cpp
./combat
```

## Concepts Demonstrated

Encapsulation and separation of concerns: the map, the units, the combat rules and the turn flow each live in their own class.
