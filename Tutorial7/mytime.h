#pragma once

#include <string>
#include <sstream>
#include <iomanip>

namespace Week07 {
class Time {
public:
    explicit Time(int hours, int minutes, int seconds)
        :hours(hours), minutes(minutes), seconds(seconds){}

    ~Time(){}

    Time(const Time &time)
        :hours(time.getHours()), minutes(time.getMinutes()), seconds(time.getSeconds()){}

    Time& operator=(const Time &time){
        hours = time.getHours();
        minutes = time.getMinutes();
        seconds = time.getSeconds();
        return *this;
    }

    double numberOfHours() const{
        return hours + minutes/60.0 + seconds/3600.0;
    }

    double numberOfMinutes() const{
        return hours*60 + minutes + seconds/60.0;
    }

    int numberOfSeconds() const{
        return hours*3600 + minutes*60 + seconds;
    }

    int getHours() const{ return hours; }

    int getMinutes() const { return minutes; }

    int getSeconds() const { return seconds; }

    std::string getTimeAsString() const{
        std::stringstream ss;
        ss << pad(hours,2) << ':' << pad(minutes,2) << ':' << pad(seconds,2);
        return ss.str();
    }

    Time operator+(const Time &time);
    Time operator+(int numberOfSeconds);
    Time operator-(const Time &time);
    bool operator==(const Time &time);
    bool operator!=(const Time &time);
    bool operator<(const Time &time);
    bool operator>(const Time &time);
    bool operator<=(const Time &time);
    bool operator>=(const Time &time);


private:
    int hours;
    int minutes;
    int seconds;

    std::string pad(int num,int totalLength) const
    {
        std::stringstream ss;
        ss << std::setw(totalLength) << std::setfill('0') << num;
        return ss.str();
    }

};
}
