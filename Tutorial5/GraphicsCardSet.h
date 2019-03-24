#pragma once

#include "GraphicsCard.h"
#include <stdlib.h>

class GraphicsCardSet : public Part {
public:
  /**
   * @brief GraphicsCardSet default constructor
   */
  GraphicsCardSet();

  /**
   * @brief GraphicsCardSet constructor
   * @param graphicsCards array of GraphicsCard
   * @param numberOfGraphicsCards number of elements in array of GraphicsCard
   */
  GraphicsCardSet(GraphicsCard* graphicsCards, int numberOfGraphicsCards);

  /**
   * @brief GraphicsCardSet copy constructor
   * @param graphicsCards instance of the GraphicsCardSet to perform a deep copy on
   */
  GraphicsCardSet(const GraphicsCardSet& graphicsCards);

  /**
   * @brief ~GraphicsCardSet destructor
   */
  virtual ~GraphicsCardSet();

  /**
   * @brief getPartInformation constructs the part information for the GraphicsCardSet class
   * @return returns the part information for the GraphicsCardSet class as a std::string
   */
  virtual std::string getPartInformation() const;

  /**
   * @brief getGraphicsCards retrieves an array of GraphicsCard
   * @return an array of GraphicsCard
   */
  GraphicsCard* getGraphicsCards() const;

  /**
   * @brief getNumberOfGraphicsCards retrieves number of elements in array of GraphicsCard
   * @return the number of elements in the GraphicsCard array
   */
  int getNumberOfGraphicsCards() const;

private:
  GraphicsCard* graphicsCards;
  int numberOfGraphicsCards;

  // Part interface
public:
  Part* clone() const;
};
