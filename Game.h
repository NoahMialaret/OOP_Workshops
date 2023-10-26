#ifndef GAME_H
#define GAME_H

#include <vector>
#include <iostream>
#include <tuple>

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

class Game
{
public:
    std::vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight);
    void gameLoop(int maxIterations, double mineDistanceThreshold);
    std::vector<GameEntity*> get_entities();
    void set_entities(std::vector<GameEntity*> ents);

private:
    std::vector<GameEntity*> entities;
};


#endif