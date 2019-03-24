#include "ComputerBuilder.h"

ComputerBuilder::ComputerBuilder() : computer(nullptr) {}

ComputerBuilder::~ComputerBuilder() {}

void ComputerBuilder::createComputer() {
  addCPU();
  addMotherboard();
  addGraphicsCard();
  addAdditionalParts();
}

Computer* ComputerBuilder::getResult() const {
  return computer;
}
