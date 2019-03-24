#include "GraphicsCardSet.h"
#include <sstream>
GraphicsCardSet::GraphicsCardSet() : graphicsCards(0), numberOfGraphicsCards(-1) {}

GraphicsCardSet::GraphicsCardSet(GraphicsCard* graphicsCards, int numberOfGraphicsCards)
    : Part("Graphics Card Set"), graphicsCards(new GraphicsCard[numberOfGraphicsCards]),
      numberOfGraphicsCards(numberOfGraphicsCards) {
  for (int i = 0; i < numberOfGraphicsCards; ++i) {
    graphicsCards[i] = GraphicsCard(graphicsCards[i]);
  }
}

GraphicsCardSet::GraphicsCardSet(const GraphicsCardSet& graphicsCardSet)
    : Part("Graphics Card Set"), graphicsCards(new GraphicsCard[graphicsCardSet.numberOfGraphicsCards]),
      numberOfGraphicsCards(graphicsCardSet.numberOfGraphicsCards) {
  for (int i = 0; i < numberOfGraphicsCards; ++i) {
    graphicsCards[i] = GraphicsCard(graphicsCardSet.graphicsCards[i]);
  }
}

GraphicsCardSet::~GraphicsCardSet() {
  if (nullptr != graphicsCards && -1 != numberOfGraphicsCards) {
    delete[] graphicsCards;
  }
  graphicsCards = nullptr;
  numberOfGraphicsCards = -1;
}

std::string GraphicsCardSet::getPartInformation() const {
  std::stringstream partInformation;

  partInformation << "Graphics Cards: Number Of Cards: " << numberOfGraphicsCards;

  for (int i = 0; i < numberOfGraphicsCards; ++i) {
    partInformation << "\nSlot " << i + 1 << ": " << graphicsCards[i].getPartInformation();
  }

  return partInformation.str();
}

GraphicsCard* GraphicsCardSet::getGraphicsCards() const {
  return graphicsCards;
}

int GraphicsCardSet::getNumberOfGraphicsCards() const {
  return numberOfGraphicsCards;
}

Part* GraphicsCardSet::clone() const {
  return new GraphicsCardSet(*this);
}
