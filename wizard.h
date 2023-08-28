#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include <string>

#include "player.h"

class Wizard : public Player
{
public:
    Wizard(std::string name, int health, int damage, int mana);
    void castSpell(Player* opponent);
private:
    int mana = 0;;
};

#endif