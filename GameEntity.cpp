#include "GameEntity.h"

GameEntity::GameEntity(int x, int y, char type)
    :
    position({x, y}),
    type(type)
{}

std::tuple<int, int> GameEntity::getPos()
{
    return position;
}

char GameEntity::getType()
{
    return type;
}

void GameEntity::setPos(std::tuple<int, int> newPos)
{
    position = newPos;
}

void GameEntity::setType(char _type)
{
    type = _type;
}
