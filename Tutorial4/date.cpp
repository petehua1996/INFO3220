#include "date.h"

using namespace Week4;
using namespace std;

Date::Date(int day, int month, int year)
    : day(day),
      month(month),
      year(year){}

Date::~Date(){}

int Date::getDay() const{
    return day;
}

int Date::getMonth() const{
    return month;
}

int Date::getYear() const{
    return year;
}

std::string Date::dateAsString() const{
    std::stringstream ss;
    (day < 10 ? ss << "0" : ss) << day << "/";
    (month < 10 ? ss << "0": ss) << month << "/";
    ss << year;
    return ss.str();
}
