#include "Fridge.h"

Fridge::Fridge()
    :
    Appliance(),
    volume(0.0)
{}

Fridge::Fridge(int powerRating, double volume)
    :
    Appliance(powerRating),
    volume(volume)
{}

void Fridge::setVolume(double newVol)
{
    volume = newVol;
}

double Fridge::getVolume() const
{
    return volume;
}

double Fridge::getPowerConsumption() const
{
    return (double)powerRating * 24.0 * volume / 100.0;
}
