#include "TV.h"

TV::TV()
    :
    Appliance(),
    screenSize(0.0)
{}

TV::TV(int powerRating, double screenSize)
    :
    Appliance(powerRating),
    screenSize(screenSize)
{}

void TV::setScreenSize(double newSize)
{
    screenSize = newSize;
}

double TV::getScreenSize() const
{
    return screenSize;
}

double TV::getPowerConsumption() const
{
    return (double)powerRating * screenSize / 10.0;
}
