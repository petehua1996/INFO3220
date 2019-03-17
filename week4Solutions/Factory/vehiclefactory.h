#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

#include "vehicle.h"

class VehicleFactory
{
   public:
    enum VehicleType {
            FastCar,
            SlowCar,
            Bus,
            Bicycle
        };

    static week02::Vehicle* getVehicle(VehicleType vehicleType);

private:
    VehicleFactory();
};

#endif // VEHICLEFACTORY_H
