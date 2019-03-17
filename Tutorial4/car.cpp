#include "car.h"

using namespace week02;

int Car::getSafetyRating() {
    int safetyRating = 0;

    if (numberOfAirBags >= 4) {
        safetyRating += 3;
    } else if (numberOfAirBags >= 2) {
        safetyRating += 2;
    } else if (numberOfAirBags > 0) {
        safetyRating += 1;
    }

    if (abs) {
        safetyRating += 2;
    }

    return safetyRating;
}
