#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>

namespace week02 {
    class Vehicle {
    public:
        Vehicle(int numberOfPassengers,
            int topSpeed,
            int numberOfWheels,
            std::string colour = "red"):
            numberOfPassengers(numberOfPassengers),
            topSpeed(topSpeed),
            numberOfWheels(numberOfWheels),
            colour(colour){}

        virtual ~Vehicle(){}

        virtual std::string getColour(){return colour;}

        virtual int getTopSpeed(){return topSpeed;}

        virtual int getNumberOfWheels(){return numberOfWheels;}

        virtual int getNumberOfPassengers(){return numberOfPassengers;}

        virtual int getSafetyRating() = 0;

    protected:
        const int numberOfPassengers;
        const int topSpeed;
        const int numberOfWheels;
        const std::string colour;
    };
}

#endif // VEHICLE_H
