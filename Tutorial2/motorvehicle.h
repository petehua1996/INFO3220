#ifndef MOTORVEHICLE_H
#define MOTORVEHICLE_H


#include "vehicle.h"

namespace week02 {
    class MotorVehicle : public Vehicle {
    public:
        MotorVehicle(int numberOfPassengers,
            int topSpeed,
            int numberOfWheels,
            double kilometresPerLitre):
            Vehicle(numberOfPassengers, topSpeed, numberOfWheels),
        kmpl(kilometresPerLitre){}

        MotorVehicle(int numberOfPassengers,
            int topSpeed,
            int numberOfWheels,
            std::string color,
            double kilometresPerLitre):
            Vehicle(numberOfPassengers, topSpeed, numberOfWheels, color),
        kmpl(kilometresPerLitre){}

        virtual ~MotorVehicle(){}

        virtual double getKilometresPerLitre(){return kmpl;}

    protected:
        double kmpl;
    };
}


#endif // MOTORVEHICLE_H
