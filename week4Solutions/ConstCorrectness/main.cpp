#include "person.h"
#include "student.h"
#include <iostream>

using namespace Week4;

int main()
{
    const Person *student = new Student("Bob", "Down", Date(21,4,1988), "Doctor of Philosophy");
    std::cout << student->getRecord() << std::endl;
    //how old is Bob?
    std::cout << "Age: " << student->getCurrentAge() << std::endl;
    delete student;
    return 0;
}
