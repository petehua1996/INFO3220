#pragma once

#include <sstream>
#include <iostream>

#include "CPU.h"
#include "Case.h"
#include "GraphicsCard.h"
#include "GraphicsCardSet.h"
#include "Motherboard.h"
#include "Part.h"

#include <vector>
class Computer {
public:
  /**
   * @brief Computer default constructor
   */
  Computer();

  /**
   * @brief ~Computer destructor
   */
  virtual ~Computer();

  // Getters

  /**
   * @brief getComputerType retrieves the computer's type
   * @return the computer's type as std::string
   */
  virtual const std::string& getComputerType() const {
    return computerType;
  }

  /**
   * @brief getCPU retrieves the computer's cpu information
   * @return the computer's CPU
   */
  virtual const CPU& getCPU() const{
      return dynamic_cast<CPU&>(*requiredParts[CPUID]);
  }

  /**
   * @brief getMotherboard retrieves the computer's motherboard information
   * @return the computer's Motherboard
   */
  virtual const Motherboard& getMotherboard() const{
      return dynamic_cast<Motherboard&>(*requiredParts[MotherboardID]);
  }

  /**
   * @brief getGraphicsCardSet retrieves the computer's graphics card set information
   * @return the computer's GraphicsCardSet
   */
  virtual const GraphicsCardSet& getGraphicsCardSet() const{
      return dynamic_cast<GraphicsCardSet&>(*requiredParts[GraphicsCardSetID]);
  }

  /**
   * @brief getAdditionalPartsList retrieves the computer's optional part information
   * @return the computer's additional part information
   */
  virtual const std::vector<Part*>& getAdditionalPartsList() const{
      return additionalParts;
  }

  /**
   * @brief getNumberOfAdditionalParts retrieves the number of optional parts included in the computer
   * @return the number of additional parts included
   */
  virtual int getNumberOfAdditionalParts() const{
      return additionalParts.size();
  }

  /**
   * @brief getComputerSpecifications retrieves the computers specification
   * @return as a std::string the computers specifications
   */
  virtual std::string getComputerSpecifications() const {
      std::stringstream ss;
      ss << computerType << "\n";
      for (int i = 0; i < numberOfRequiredParts; ++i) {
        ss << requiredParts[i]->getPartInformation() << "\n";
      }
      ss << "Additional Parts";
      for (Part* p : additionalParts) {
        ss << "\n" << p->getPartInformation();
      }
      return ss.str();
    }

  // Setters

  /**
   * @brief setComputerType setter method for computerType
   * @param computerType computer's type as std::string
   */
  virtual void setComputerType(const std::string& computerType) {
    this->computerType = computerType;
  }

  /**
   * @brief setCPU setter method for CPU
   * @param cpu computer's CPU
   */
  virtual void setCPU(const CPU& cpu){
      delete this->requiredParts[CPUID];
      this->requiredParts[CPUID] = new CPU(cpu);
  }

  /**
   * @brief setMotherboard setter method for Motherboard
   * @param motherboard computer's Motherboard
   */
  virtual void setMotherboard(const Motherboard& motherboard){
      delete this->requiredParts[MotherboardID];
      this->requiredParts[MotherboardID] = new Motherboard(motherboard);
  }

  /**
   * @brief setGraphicsCards setter method for GraphicsCardSet
   * @param graphicsCard list of GraphicsCard
   * @param numberOfGraphicsCard number of items in GraphicsCard array
   */
  virtual void setGraphicsCards(GraphicsCard* graphicsCards, int numberOfGraphicsCard){
      delete this->requiredParts[GraphicsCardSetID];
      this->requiredParts[GraphicsCardSetID] = new GraphicsCardSet(graphicsCards, numberOfGraphicsCard);
  }

  /**
   * @brief addAdditionalPart adds additional Part to computer
   * @param part additional Part to add to computer
   */
  virtual void addAdditionalPart(const Part& part){
      this->additionalParts.push_back(part.clone());
  }

protected:
  enum ComputerPartID {
    CPUID,
    MotherboardID,
    GraphicsCardSetID,
  };

  std::string computerType;

  Part** requiredParts;
  static int numberOfRequiredParts;

  std::vector<Part*> additionalParts;
};
