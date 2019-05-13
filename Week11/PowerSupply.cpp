#include "PowerSupply.h"

PowerSupply::PowerSupply()
    : RequiredPart()
    , m_watts(550)
{

}

PowerSupply::PowerSupply(const std::string &name, int watts)
    : RequiredPart(name)
    , m_watts(watts)
{

}

PowerSupply::PowerSupply(const PowerSupply &powerSupply)
    : RequiredPart(powerSupply.m_name)
    , m_watts(powerSupply.m_watts)
{

}

PowerSupply::~PowerSupply()
{

}

std::string PowerSupply::getPartInformation() const
{
    char maximumPower[5];
    snprintf(maximumPower, sizeof(maximumPower), "%d", m_watts);

    std::string partInformation ("Power Supply: " + m_name + ", Maximum Power: " + maximumPower + " Watts");
    return partInformation;
}

void PowerSupply::accept(Visitor* visitor)
{
    //TODO
}
