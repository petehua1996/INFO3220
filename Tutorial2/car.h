#ifndef CAR_H
#define CAR_H

#include <string>
#include "motorvehicle.h"

namespace week02 {
    class Car: public MotorVehicle
    {
    public:
        Car(int numberOfPassengers,
            int topSpeed,
            double kilometresPerLitre,
            int numberOfAirBags = 2,
            bool abs = true,
            int numberOfWheels = 4)
            : MotorVehicle (numberOfPassengers, topSpeed, numberOfWheels, kilometresPerLitre),
              numberOfAirBags(numberOfAirBags),
              abs(abs){}

        Car(int numberOfPassengers,
            int topSpeed,
            double kilometresPerLitre,
            std::string color,
            int numberOfAirBags = 2,
            bool abs = true,
            int numberOfWheels = 4)
            : MotorVehicle (numberOfPassengers, topSpeed, numberOfWheels, color, kilometresPerLitre),
              numberOfAirBags(numberOfAirBags),
              abs(abs){}

        int getNumberOfAirBags(){return numberOfAirBags;}

        bool getAbs(){return abs;}

        int getSafetyRating();
    private:
        const int numberOfAirBags;
        const bool abs;
    };
}


#endif // CAR_H
