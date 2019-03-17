#pragma once

#include "date.h"
#include <string>

using namespace std;

namespace Week4 {
class Person {
public:
    Person(std::string firstName, std::string surname, Date dateOfBirth);
    virtual ~Person();

    void changeFirstName(const std::string &firstName);
    const std::string & getFirstName() const;

    void changeSurname(const std::string &surname);
    const std::string & getSurname() const;

    int getYearOfBirth();
    int getCurrentAge();

    virtual std::string getRecord() const = 0;

protected:
    std::string firstName;
    std::string surname;
    Date dateOfBirth;
};
} // namespace  Week4
