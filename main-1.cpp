#include <iostream>
#include <tuple>

#include "Effect.h"
#include "GameEntity.h"
#include "Utils.h"

int main()
{
    std::tuple<int, int> pos1 = Utils::generateRandomPos(10, 10);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(10, 10);

    std::cout << std::get<0>(pos1) << " - " << std::get<1>(pos1) << std::endl;
    std::cout << std::get<0>(pos2) << " - " << std::get<1>(pos2) << std::endl;

    std::cout << "Distance: " << Utils::calculateDistance(pos1, pos2) << std::endl;

    return 0;
}