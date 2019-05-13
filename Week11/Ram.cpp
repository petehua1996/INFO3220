#include "Ram.h"

Ram::Ram()
    : RequiredPart()
{

}

Ram::Ram(const std::string &name, int speed, int size)
    : RequiredPart(name)
    , m_speed(speed)
    , m_size(size)
{

}

Ram::Ram(const Ram& ram)
    : RequiredPart(ram.m_name)
    , m_speed(ram.m_speed)
    , m_size(ram.m_size)
{

}

Ram::~Ram()
{

}

std::string Ram::getPartInformation() const
{
    char frequency[5];
    snprintf(frequency, sizeof(frequency), "%d", m_speed);

    char size[5];
    snprintf(size, sizeof(size), "%d", m_size);

    std::string partInformation(m_name + ", Frequency: " + frequency + " Mhz, Size: " + size + " GB");

    return partInformation;
}

int Ram::getRamSpeed() const
{
    return m_speed;
}

int Ram::getRamSize() const
{
    return m_size;
}

void Ram::accept(Visitor* visitor)
{
    //TODO
}
