#include "student.h"

#include <sstream>

using namespace Week4;

Week4::Student::Student(const std::string &givenName, const std::string &surname, const Week4::Date &date, const std::string &degree)
    :Person(givenName,surname,date),m_degree(new std::string(degree)),m_recordAccessed(0)
{

}

std::string Week4::Student::getRecord() const
{
    m_recordAccessed++;
    std::stringstream ss;
    ss << "Name: " << getFirstName() << " " << getSurname() << "\n";
    ss << "Date Of Birth: " << m_dateOfBirth.dateAsString() << "\n";
    ss << "Degree: " << *m_degree;
    return ss.str();
}
