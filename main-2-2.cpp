#include <iostream>

#include "Appliance.h"
#include "TV.h"

int main()
{
    Appliance* tv = new TV(10, 24.0);

    std::cout << tv->getPowerConsumption() << std::endl;

    delete tv;

    return 0;
}