#include "House.h"

House::House()
    :
    appliances(nullptr)
{}

House::House(int numAppliances)
    :
    appliances(new Appliance*[numAppliances]{nullptr}),
    maxAppliances(numAppliances)
{}

House::~House()
{
    for (int i = 0; i < numAppliances; i++)
    {
        delete appliances[i];
    }
}

bool House::addAppliance(Appliance* appliance)
{
    if (numAppliances >= maxAppliances)
    {
        return false;
    }

    appliances[numAppliances] = appliance;

    numAppliances++;

    return true;
}

double House::getTotalPowerConsumption() const
{
    double totalConsumption = 0.0;

    for (int i = 0; i < numAppliances; i++)
    {
        totalConsumption += appliances[i]->getPowerConsumption();
    }

    return totalConsumption;
}
