#pragma once

#include "vehicle.h"

class VehicleFactory {
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
