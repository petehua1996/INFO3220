#include "mytime.h"

namespace Week07 {
    Time Time::operator+(const Time &time){
        int h = time.getHours() + hours;
        int m = time.getMinutes() + minutes;
        int s = time.getSeconds() + seconds;

        m += s/60;
        s = s % 60;

        h += m/60;
        m = m % 60;

        h %= 24;
        return Time(h,m,s);
    }

    Time Time::operator+(int numberOfSeconds){
        return operator+(Time(0,0,numberOfSeconds));
    }

    Time Time::operator-(const Time &time){
        int h = time.getHours() - hours;
        int m = time.getMinutes() - minutes;
        int s = time.getSeconds() - seconds;

        if(s < 0){
            m -= 1;
            s += 60;
        }

        if(m < 0){
            h -= 1;
            m += 60;
        }

        if(h < 0) h+=24;

        return Time(h,m,s);
    }

    bool Time::operator==(const Time &time){
        return time.getHours()==hours && time.getMinutes()==minutes && time.getSeconds()==seconds;
    }

    bool Time::operator!=(const Time &time){
        return !operator==(time);
    }

    bool Time::operator<(const Time &time){
        return hours < time.getHours()
                || (hours == time.getHours() && minutes < time.getMinutes())
                || (hours == time.getHours() && minutes == time.getMinutes() && seconds < time.getSeconds());
    }

    bool Time::operator>(const Time &time){
        return hours > time.getHours()
                || (hours == time.getHours() && minutes > time.getMinutes())
                || (hours == time.getHours() && minutes == time.getMinutes() && seconds > time.getSeconds());
    }

    bool Time::operator<=(const Time &time){
        return operator<(time) || operator==(time);
    }

    bool Time::operator>=(const Time &time){
        return operator>(time) || operator==(time);
    }
}
