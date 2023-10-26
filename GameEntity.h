#ifndef GENT_H
#define GENT_H

#include <tuple>

class GameEntity
{
public:
    GameEntity() = default;
    GameEntity(int x, int y, char type);
    std::tuple<int, int> getPos();
    char getType();
    void setPos(std::tuple<int, int> newPos);
    void setType(char type);
protected:
    std::tuple<int, int> position;
    char type;
};

#endif