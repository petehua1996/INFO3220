#pragma once

#include "person.h"

namespace Week4 {
class Student : public Person {
public:
    Student(const std::string& givenName, const std::string& surname,
            const Date& date, const std::string& degree);
    virtual ~Student();

    virtual std::string getRecord() const;

private:
    std::string* degree;
    mutable int recordAccessed;
};
} // namespace Week4
