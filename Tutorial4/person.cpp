#include "person.h"

using namespace Week4;

Person::Person(std::string firstName, std::string surname, Date dateOfBirth):
    firstName(firstName),
    surname(surname),
    dateOfBirth(dateOfBirth){}

Person::~Person(){}

void Person::changeFirstName(const std::string &firstName){
    this->firstName = firstName;
}


const std::string & Person::getFirstName() const{
    return firstName;
}

void Person::changeSurname(const std::string &surname){
    this->surname = surname;
}

const std::string & Person::getSurname() const{
    return surname;
}

int Person::getYearOfBirth(){
    return dateOfBirth.getYear();
}

int Person::getCurrentAge(){
    return 2019-dateOfBirth.getYear();
}
