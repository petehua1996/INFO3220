#include "GamingComputerBuilder.h"

GamingComputerBuilder::GamingComputerBuilder() : ComputerBuilder() {}

GamingComputerBuilder::~GamingComputerBuilder() {}

void GamingComputerBuilder::createComputer() {
    computer = new Computer();
    computer->setComputerType("Gaming Computer");
    this->ComputerBuilder::createComputer();
}

void GamingComputerBuilder::addCPU() {
    Motherboard motherboard("ASUS P8H61-M LE/CSM R2.0", "LGA 1155", 2, 1);
    computer->setMotherboard(motherboard);
}

void GamingComputerBuilder::addMotherboard() {
    Motherboard motherboard("ASUS P8H61-M LE/CSM R2.0", "LGA 1155", 2, 1);
    computer->setMotherboard(motherboard);
}

void GamingComputerBuilder::addGraphicsCard() {
    GraphicsCard* graphicsCard = new GraphicsCard[2];
    graphicsCard[0] = GraphicsCard("On board graphics", 650, 1);
    computer->setGraphicsCards(graphicsCard, 1);
    delete[] graphicsCard;
}

void GamingComputerBuilder::addAdditionalParts() {
    computer->addAdditionalPart(Case("Corsair Obsidian 750D Black Aluminum", BaseUnit));
}
