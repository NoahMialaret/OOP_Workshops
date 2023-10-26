#include "Explosion.h"

Explosion::Explosion(int x, int y)
    :
    GameEntity(x, y, 'E')
{}

void Explosion::apply(GameEntity &entity)
{
    entity.setPos({-1, -1});
    entity.setType('X');
}