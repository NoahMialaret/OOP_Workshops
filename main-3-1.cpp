#include <iostream>

#include "House.h"
#include "Appliance.h"
#include "Fridge.h"
#include "TV.h"

int main()
{
    House myHouse(3);

    Appliance* app1 = new Appliance(5);
    Appliance* app2 = new Fridge(10, 45.0);
    Appliance* app3 = new TV(3, 7.5);
    Appliance* app4 = new Fridge(12, 20.0);

    if(!myHouse.addAppliance(app1))
    {
        std::cout << "Couldn't add appliance 1." << std::endl;
        delete app1;
    }
    if(!myHouse.addAppliance(app2))
    {
        std::cout << "Couldn't add appliance 2." << std::endl;
        delete app2;
    }
    if(!myHouse.addAppliance(app3))
    {
        std::cout << "Couldn't add appliance 3." << std::endl;
        delete app3;
    }
    if(!myHouse.addAppliance(app4))
    {
        std::cout << "Couldn't add appliance 4." << std::endl;
        delete app4;
    }

    std::cout << "Total power consumption " << myHouse.getTotalPowerConsumption() << std::endl;

    return 0;
}