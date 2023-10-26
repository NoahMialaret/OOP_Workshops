#include "Game.h"

std::vector<GameEntity*> Game::initGame(int numShips, int numMines, int gridWidth, int gridHeight)
{
    for (int i = 0; i < numShips; i++)
    {
        auto rand_pos = Utils::generateRandomPos(gridWidth, gridHeight);
        GameEntity* new_ent = new Ship(std::get<0>(rand_pos), std::get<1>(rand_pos));
        entities.push_back(new_ent);
    }

    for (int i = 0; i < numMines; i++)
    {
        auto rand_pos = Utils::generateRandomPos(gridWidth, gridHeight);
        GameEntity* new_ent = new Mine(std::get<0>(rand_pos), std::get<1>(rand_pos));
        entities.push_back(new_ent);
    }

    return entities;
}

void Game::gameLoop(int maxIterations, double mineDistanceThreshold)
{
    for (int i = 0; i < maxIterations; i++)
    {
        for(auto& e : entities)
        {
            if (e->getType() == 'S')
            {
                //auto ship = dynamic_cast<Ship*>(e);
            }
        }
    }
}
