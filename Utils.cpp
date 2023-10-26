#include "Utils.h"

std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight)
{
    std::random_device rd;
    std::mt19937 rng(rd());

    std::uniform_int_distribution<int> xDist(0, gridWidth - 1);
    std::uniform_int_distribution<int> yDist(0, gridHeight - 1);

    return {xDist(rng), yDist(rng)};
}

double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2)
{
    return std::sqrt(pow(std::get<0>(pos1) - std::get<0>(pos2), 2) + pow(std::get<1>(pos1) - std::get<1>(pos2), 2));
}
