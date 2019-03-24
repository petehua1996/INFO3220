#include "Computer.h"
#include <sstream>

int Computer::numberOfRequiredParts = 3;

Computer::Computer():
    requiredParts(new Part*[numberOfRequiredParts]),
    additionalParts()
{
    for (int i=0;i<numberOfRequiredParts;i++) {
        requiredParts[i] = nullptr;
    }
}

Computer::~Computer(){
    for (int i=0;i<numberOfRequiredParts;i++) {
        delete requiredParts[i];
    }
    delete [] requiredParts;
    for(Part* p: additionalParts){
        delete p;
    }
}
