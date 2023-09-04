#ifndef FRIDGE_H
#define FRIDGE_H

#include "Appliance.h"

class Fridge : public Appliance
{
public:
    Fridge();
    Fridge(int powerRating, double volume);

    void setVolume(double newVol);
    double getVolume() const;

    double getPowerConsumption() const override;
private:
    double volume = 0.0;
};

#endif