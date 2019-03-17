#include "student.h"

using namespace Week4;

Student::Student(const std::string& givenName, const std::string& surname,
                 const Date& date, const std::string& degree)
    : Person (givenName, surname, date),
      degree(new std::string(degree)),
      recordAccessed(0){}


Student::~Student(){
    delete degree;
}

std::string Student::getRecord() const{
    recordAccessed++;
    std::stringstream ss;
    ss << "Name: " << getFirstName() << " " << getSurname() << "\n";
    ss << "Date Of Birth: " << dateOfBirth.dateAsString() << "\n";
    ss << "Degree: " << *degree;
    return ss.str();

}
