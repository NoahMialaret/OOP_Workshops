#ifndef APPLIANCE_H
#define APPLIANCE_H

class Appliance
{
public:
    Appliance();
    Appliance(int powerRating);

    void turnOn();
    void turnOff();

    int get_powerRating() const;
    void set_powerRating(int rating);
    bool get_isOn() const;
    void set_isOn(bool on);

    virtual double getPowerConsumption() const;
protected:
    int powerRating = 0;
    bool isOn = false;
};

#endif