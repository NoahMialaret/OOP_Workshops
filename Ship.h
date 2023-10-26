#ifndef SHIP_H
#define SHIP_H

#include <tuple>

#include "GameEntity.h"
#include "Effect.h"

class Ship : public GameEntity
{
public:
    Ship() = default;
    Ship(int x, int y);
    void move(int dx, int dy);
};

#endif