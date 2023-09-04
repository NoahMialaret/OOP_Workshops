#ifndef TV_H
#define TV_H

#include "Appliance.h"

class TV : public Appliance
{
public:
    TV();
    TV(int powerRating, double screenSize);

    void setScreenSize(double newSize);
    double getScreenSize() const;

    double getPowerConsumption() const override;
private:
    double screenSize = 0.0;
};

#endif