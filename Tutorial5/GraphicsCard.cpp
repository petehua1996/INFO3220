#include "GraphicsCard.h"
#include <string>

GraphicsCard::GraphicsCard() {}

GraphicsCard::GraphicsCard(const std::string& name, int speed, int size)
    : Part(name), speed(speed), size(size) {}

GraphicsCard::GraphicsCard(const GraphicsCard& graphicsCard)
    : Part(graphicsCard.name), speed(graphicsCard.speed), size(graphicsCard.size) {}

GraphicsCard::~GraphicsCard() {}

std::string GraphicsCard::getPartInformation() const {
  return std::string(
      name + ", Frequency: " + std::to_string(speed) + " Mhz, Size: " + std::to_string(size) + " GB");
  ;
}

Part* GraphicsCard::clone() const {
  return new GraphicsCard(*this);
}
