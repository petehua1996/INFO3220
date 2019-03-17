#ifndef BUS_H
#define BUS_H

#include <string>
#include "motorvehicle.h"

namespace week02 {
    class Bus: public MotorVehicle
    {
    public:
        Bus(int numberOfPassengers,
           int topSpeed,
           double kilometresPerLitre,
           bool seatBeltsInstalled = false,
           bool standingPassengersAllowed = true,
           int numberOfWheels = 6)
            : MotorVehicle (numberOfPassengers, topSpeed, numberOfWheels, kilometresPerLitre),
              seatBeltsInstalled(seatBeltsInstalled),
              standingPassengersAllowed(standingPassengersAllowed){}

        Bus(int numberOfPassengers,
           int topSpeed,
           double kilometresPerLitre,
           std::string color,
           bool seatBeltsInstalled = false,
           bool standingPassengersAllowed = true,
           int numberOfWheels = 6)
            : MotorVehicle (numberOfPassengers, topSpeed, numberOfWheels, color, kilometresPerLitre),
              seatBeltsInstalled(seatBeltsInstalled),
              standingPassengersAllowed(standingPassengersAllowed){}

        bool getSeatBeltsInstalled(){return seatBeltsInstalled;}

        bool getStandingPassengersAllowed(){return standingPassengersAllowed;}

        int getSafetyRating();
    private:
        const bool seatBeltsInstalled;
        const bool standingPassengersAllowed;
    };
}


#endif // BUS_H
