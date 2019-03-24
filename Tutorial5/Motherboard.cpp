#include "Motherboard.h"
#include <sstream>
#include <string>

Motherboard::Motherboard() {}

Motherboard::Motherboard(const std::string& name, const std::string& socketType, int numberOfRamSlots,
    int numberOfGraphicsCardSlots)
    : Part(name), socketType(socketType), numberOfRamSlots(numberOfRamSlots),
      numberOfGraphicsCardSlots(numberOfGraphicsCardSlots) {}

Motherboard::Motherboard(const Motherboard& motherboard)
    : Part(motherboard.name), socketType(motherboard.socketType),
      numberOfRamSlots(motherboard.numberOfRamSlots),
      numberOfGraphicsCardSlots(motherboard.numberOfGraphicsCardSlots) {}

Motherboard::~Motherboard() {}

std::string Motherboard::getPartInformation() const {
  std::stringstream partInformation;
  partInformation << "Motherboard: " << name + ", Socket: " << socketType << "\n";
  partInformation << "No. of Ram Slots: " << numberOfRamSlots
                  << ", No. of Graphics Cards Permitted: " << numberOfGraphicsCardSlots;
  return partInformation.str();
}

Part* Motherboard::clone() const {
  return new Motherboard(*this);
}
