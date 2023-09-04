#include <iostream>

#include "Appliance.h"
#include "Fridge.h"

int main()
{
    Appliance* fridge = new Fridge(10, 100);

    std::cout << fridge->getPowerConsumption() << std::endl;

    delete fridge;

    return 0;
}