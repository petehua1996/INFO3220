#include "bicycle.h"
using namespace week02;
 Bicycle::Bicycle(int numberOfPassengers,
    int topSpeed,
    bool helmetUsed,
    int numberOfWheels)
    :Vehicle(numberOfPassengers,topSpeed, numberOfWheels),
     m_helmetUsed(helmetUsed)
 {}

Bicycle::Bicycle(int numberOfPassengers,
    int topSpeed,
    std::string color,
    bool helmetUsed,
    int numberOfWheels)
:Vehicle(numberOfPassengers,topSpeed, numberOfWheels,color),
 m_helmetUsed(helmetUsed)
 {}


int Bicycle::getSafetyRating()
{
    if (m_helmetUsed)
	{
		return 5;
	}
	else
	{
		return 0;
	}
}
