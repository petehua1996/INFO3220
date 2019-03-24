#pragma once

#include "ComputerBuilder.h"

class GamingComputerBuilder : public ComputerBuilder {
public:
  /**
   * @brief GamingComputerBuilder default constructor
   */
  GamingComputerBuilder();

  /**
   * @brief ~GamingComputerBuilder destructor
   */
  virtual ~GamingComputerBuilder();

  /**
   * @brief createComputer executes the algorithm to assemble a Gaming Computer
   */
  virtual void createComputer();

protected:
  /**
   * @brief addCPU add a CPU to the Gaming Computer
   */
  virtual void addCPU();

  /**
   * @brief addMotherboard add a Motherboard to the Gaming Computer
   */
  virtual void addMotherboard();

  /**
   * @brief addGraphicsCard add Graphics Cards to the Gaming Computer
   */
  virtual void addGraphicsCard();

  /**
   * @brief addAdditionalParts add any additional parts to the Gaming Computer
   */
  virtual void addAdditionalParts();
};
