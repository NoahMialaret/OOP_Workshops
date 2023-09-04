#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance
{
public:
    Appliance();
    Appliance(int powerRating);

    void turnOn();
    void turnOff();

    virtual double getPowerConsumption() const;
protected:
    int powerRating = 0;
    bool isOn = false;
};

#endif