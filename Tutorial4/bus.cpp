#include "bus.h"

using namespace week02;

int Bus::getSafetyRating() {
    int safetyRating = 0;

    if (seatBeltsInstalled) {
        safetyRating += 3;
    }
    if (!standingPassengersAllowed) {
        safetyRating += 2;
    }

    return safetyRating;
}
