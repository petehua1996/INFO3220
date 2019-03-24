#include "CPU.h"

#include <sstream>
#include <iomanip>

std::string CPU::getPartInformation() const {
  std::stringstream ss;
  ss << "CPU: " << name << ", Clock Speed: " << std::setprecision(2) << clockSpeed
     << " Ghz, Socket: " << socketType;
  return ss.str();
}

Part* CPU::clone() const {
  return new CPU(*this);
}
