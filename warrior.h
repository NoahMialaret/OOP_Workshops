#ifndef WARRIOR_H
#define WARRIOR_H

#include <iostream>
#include <string>

#include "player.h"

class Warrior : public Player
{
public:
    Warrior(std::string name, int health, int damage, std::string weapon);
    void swingWeapon(Player* opponent);
private:
    std::string weapon = " ";
};

#endif