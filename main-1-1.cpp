#include <iostream>

#include "Appliance.h"

int main()
{
    Appliance app(10);

    std::cout << app.getPowerConsumption() << std::endl;

    return 0;
}