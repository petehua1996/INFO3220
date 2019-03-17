#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
#include "vehicle.h"

namespace week02 {
    class Bicycle : public Vehicle
    {
    public:
        Bicycle(int numberOfPassengers,
            int topSpeed,
            bool helmetUsed = false,
            int numberOfWheels = 2):
            Vehicle(numberOfPassengers, topSpeed, numberOfWheels),
            helmetUsed(helmetUsed) {}

        Bicycle(int numberOfPassengers,
            int topSpeed,
            std::string color,
            bool helmetUsed = false,
            int numberOfWheels = 2):
            Vehicle(numberOfPassengers, topSpeed, numberOfWheels, color),
            helmetUsed(helmetUsed) {}

        bool getHelmetUsed(){return helmetUsed;}

        int getSafetyRating();

    private:
        const bool helmetUsed;
    };
}

#endif // BICYCLE_H
