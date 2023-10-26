#include <iostream>
#include <tuple>

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

#include "Explosion.h"
#include "Ship.h"
#include "Mine.h"

int main()
{
    Ship ship(10, 15);
    Mine mine(4, 2);

    std::cout   << std::get<0>(ship.getPos()) << " - " 
                << std::get<1>(ship.getPos()) << std::endl;

    ship.move(10,3);

    std::cout   << std::get<0>(ship.getPos()) << " - " 
                << std::get<1>(ship.getPos()) << std::endl;

    mine.explode().apply(ship);


    std::cout   << std::get<0>(ship.getPos()) << " - " 
                << std::get<1>(ship.getPos()) << std::endl;
                
    return 0;
}