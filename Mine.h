#ifndef MINE_H
#define MINE_H

#include <tuple>

#include "GameEntity.h"
#include "Effect.h"
#include "Explosion.h"

class Mine : public GameEntity
{
public:
    Mine() = default;
    Mine(int x, int y);
    Explosion explode();
};

#endif