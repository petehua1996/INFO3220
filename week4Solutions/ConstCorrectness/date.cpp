#include "date.h"
#include <iomanip>
#include <sstream>
#include <string>

Week4::Date::Date(int day, int month, int year)
    :m_day(day),m_month(month),m_year(year)
{

}

std::string pad(int num,int totalLength)
{
    std::stringstream ss;
    ss << std::setw(totalLength) << std::setfill('0') << num;
    return ss.str();
}

std::string Week4::Date::dateAsString() const
{
    std::stringstream ss;
    ss << pad(m_day,2) << '/' << pad(m_month,2) << '/' << pad(m_year,4);
    return ss.str();
}
