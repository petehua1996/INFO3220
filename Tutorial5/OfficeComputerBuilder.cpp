#include "OfficeComputerBuilder.h"

OfficeComputerBuilder::OfficeComputerBuilder() : ComputerBuilder() {}

OfficeComputerBuilder::~OfficeComputerBuilder() {}

void OfficeComputerBuilder::createComputer() {
  computer = new Computer();
  computer->setComputerType("Office Computer");
  this->ComputerBuilder::createComputer();
}

void OfficeComputerBuilder::addCPU() {
  CPU cpu("Intel Celeron G1610 Ivy Bridge Dual-Core", 2.6, "LGA 1155");
  computer->setCPU(cpu);
}

void OfficeComputerBuilder::addMotherboard() {
  Motherboard motherboard("ASUS P8H61-M LE/CSM R2.0", "LGA 1155", 2, 1);
  computer->setMotherboard(motherboard);
}

void OfficeComputerBuilder::addGraphicsCard() {
  GraphicsCard* graphicsCard = new GraphicsCard[2];
  graphicsCard[0] = GraphicsCard("On board graphics", 650, 1);
  computer->setGraphicsCards(graphicsCard, 1);
  delete[] graphicsCard;
}

void OfficeComputerBuilder::addAdditionalParts() {
  computer->addAdditionalPart(Case("Corsair Obsidian 750D Black Aluminum", BaseUnit));
}
