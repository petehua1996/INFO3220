#pragma once

#include <sstream>
#include <string>

namespace Week4 {
class Date {
public:
    Date(int day, int month, int year);
    ~Date();

    int getYear() const;
    int getMonth() const;
    int getDay() const;

    std::string dateAsString() const;
private:
    int day;
    int month;
    int year;
};
} // namespace Week4
