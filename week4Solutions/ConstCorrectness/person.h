#ifndef PERSON_H
#define PERSON_H

#include "Date.h"
#include <string>
#include <QString>
#include <QDate>
namespace Week4
{
class Person
{
public:
    Person(const std::string &firstName,
        const std::string &surname,
        const Date &dateOfBirth):
        m_firstName(firstName),
        m_surname(surname),
        m_dateOfBirth(dateOfBirth){}

        virtual ~Person(){}

    void changeFirstName(const std::string &firstName){m_firstName = firstName;}
    const std::string &getFirstName()const {return m_firstName;}

    void changeSurname(const std::string &surname){m_surname = surname;}
    const std::string &getSurname()const {return m_surname;}

    int getYearOfBirth()const {return m_dateOfBirth.getYear();}
    int getCurrentAge()const
    {//this is more than you need, we would be happy with 2018-m_dateOfBirth.getYear()
        int cm = QDate::currentDate().month();
        int bm = m_dateOfBirth.getMonth();
        bool hadBirthday = cm>bm||(cm==bm && QDate::currentDate().day()>m_dateOfBirth.getDay());
        return QDate::currentDate().year() - m_dateOfBirth.getYear() - (hadBirthday?0:1);
    }

    virtual std::string getRecord() const = 0;

protected:
    std::string m_firstName;
    std::string m_surname;
    Date m_dateOfBirth;
};
} // namespace  Week4
#endif
