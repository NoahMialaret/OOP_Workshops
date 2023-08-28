#include "warrior.h"

Warrior::Warrior(std::string name, int health, int damage, std::string weapon)
    :
    Player(name, health, damage),
    weapon(weapon)
{}

void Warrior::swingWeapon(Player* opponent)
{
    std::cout << name << " swings their " << weapon << " at " << opponent->getName() << "!\n";
    opponent->takeDamage(damage);
}
