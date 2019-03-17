#include "vehiclefactory.h"
#include "bicycle.h"
#include "car.h"
#include "bus.h"

week02::Vehicle* VehicleFactory::getVehicle(VehicleType vehicleType){
    switch(vehicleType) {
            case FastCar: return new week02::Car(2,250,8);
            case SlowCar: return new week02::Car(5,100,25);
            case Bus: return new week02::Bus(50,110,2);
            case Bicycle: return new week02::Bicycle(1,70);
            default: throw "invalid vehicle type";
        }
}
