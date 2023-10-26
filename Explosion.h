#ifndef EXPLO_H
#define EXPLO_H

#include <tuple>

#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, public Effect
{
public:
    Explosion() = default;
    Explosion(int x, int y);
    void apply(GameEntity& entity) override;
};

#endif