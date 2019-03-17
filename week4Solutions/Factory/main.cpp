#include "vehiclefactory.h"
#include <iostream>
#include <string>

int main()
{
 std::cout << VehicleFactory::getVehicle(VehicleFactory::FastCar)->getTopSpeed() << std::endl;
 std::cout << VehicleFactory::getVehicle(VehicleFactory::SlowCar)->getTopSpeed() << std::endl;
 std::cout << VehicleFactory::getVehicle(VehicleFactory::Bus)->getTopSpeed() << std::endl;
 std::cout << VehicleFactory::getVehicle(VehicleFactory::Bicycle)->getTopSpeed() << std::endl;
}
