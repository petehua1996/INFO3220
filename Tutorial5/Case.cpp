#include "Case.h"

Case::Case() : Part("Generic Case"), caseType(BaseUnit) {}

Case::Case(const std::string& name, CaseType caseType) : Part(name), caseType(caseType) {}

Case::Case(const Case& computerCase) : Part(computerCase.name), caseType(computerCase.caseType) {}

Case::~Case() {}

std::string Case::getPartInformation() const {
  std::string partInformation("Case: " + name + ", Case Type: ");
  switch (caseType) {
    case Chassis:
      return partInformation + "Chassis";
    case Tower:
      return partInformation + "Tower";
    case SystemUnit:
      return partInformation + "SystemUnit";
    case Cabinet:
      return partInformation + "Cabinet";
    case BaseUnit:
      return partInformation + "BaseUnit";
    default:
      return partInformation + "Unknown";
  }
}

Part* Case::clone() const {
  return new Case(*this);
}
