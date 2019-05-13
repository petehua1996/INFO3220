#include "GraphicsCard.h"

GraphicsCard::GraphicsCard()
    : RequiredPart()
{

}

GraphicsCard::GraphicsCard(const std::string &name, int speed, int size)
    : RequiredPart(name)
    , m_speed(speed)
    , m_size(size)
{

}

GraphicsCard::GraphicsCard(const GraphicsCard &graphicsCard)
    : RequiredPart(graphicsCard.m_name)
    , m_speed(graphicsCard.m_speed)
    , m_size(graphicsCard.m_size)
{

}

GraphicsCard::~GraphicsCard()
{

}

std::string GraphicsCard::getPartInformation() const
{
    char frequency[5];
    snprintf(frequency, sizeof(frequency), "%d", m_speed);

    char size[5];
    snprintf(size, sizeof(size), "%d", m_size);

    std::string partInformation(m_name + ", Frequency: " + frequency + " Mhz, Size: " + size + " GB");

    return partInformation;
}

void GraphicsCard::accept(Visitor* visitor)
{
    //TODO
}
