#ifndef HOUSE_H
#define HOUSE_H

#include "Appliance.h"

class House
{
public:
    House();
    House(int numAppliances);
    ~House();

    bool addAppliance(Appliance* appliance);
    double getTotalPowerConsumption() const;
private:
    Appliance** appliances = nullptr;
    int numAppliances = 0;
    int maxAppliances = 0;
};

#endif