#pragma once

#include <string>

/**
 * @brief The Part class due to this class including one virtual method this
 * base class cannot be initialised as a concrete class
 */
class Part {
public:
  /**
   * @brief Part default constructor
   */
  Part() {}

  /**
   * @brief Part constructor
   * @param name description of part
   */
  Part(const std::string& name) : name(name) {}

  /**
   * @brief Part copy constructor
   * @param part a Part object
   */
  Part(const Part& part) : name(part.name) {}

  /**
   * @brief ~Part destructor
   */
  virtual ~Part() {}

  /**
   * @brief getPartInformation constructs the part information for the Part class
   * @return returns the part information for the Part class as a std::string
   */
  virtual std::string getPartInformation() const = 0;

  /**
   * @brief getPartName retrieves the part name
   * @return returns a const reference to the part name stored in the Part class
   */
  virtual const std::string& getPartName() const {
    return name;
  }

  virtual Part* clone() const = 0;

protected:
  std::string name;
};
