#include "bicycle.h"

using namespace week02;

int Bicycle::getSafetyRating() {
    if (helmetUsed) {
        return 5;
    }
    return 0;
}
