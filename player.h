#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player
{
public:
    Player(std::string name, int health, int damage);

    void attack(Player* opponent, int damage);
    void takeDamage(int damage);

    std::string getName() const;
    int getHealth() const;
    int getDamage() const;
protected:
    std::string name = "";
    int health = 0;
    int damage = 0;
};

#endif