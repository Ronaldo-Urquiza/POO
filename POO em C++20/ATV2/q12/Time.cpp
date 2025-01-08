#include <iostream>
#include <format>
using std::cout, std::endl, std::format;


#include "Time.h"

Time::Time(int hr, int min, int sec)
{
    setTime(hr, min, sec);
    //qualquer modificação posterior em setTime reflete no construtor
}

void Time::setTime(int h, int m, int s)
{
    setHour(h);
    setMinute(m);
    setSecond(s);
}

std::string Time::toUniversal() const
{
    return format("{:02d}:{:02d}:{:02d}", hour, minute, second);
}

std::string Time::toStandard() const
{
    return format("{:02d}:{:02d}:{:02d} {}", ( (hour == 0 || hour == 12) ? 12 : hour % 12 ), minute, second, (hour < 12 ? "AM" : "PM"));
}

void Time::tick() {
    int h = getHour();
    int m = getMinute();
    int s = getSecond();

    bool hProblema = false;
    bool mProblema = false;
    bool sProblema = false;

    if (h == 23) {
        hProblema = true;
    }
    if (m == 59) {
        mProblema = true;
    }
    if (s == 59) {
        sProblema = true;
    }

    if (sProblema && !mProblema && !hProblema) {
        s = 00;
        m += 1;
    }
    else if (sProblema && mProblema && !hProblema) {
        s = 00;
        m = 00;
        h += 1;
    }
    else if (sProblema && mProblema && hProblema) {
        s = 00;
        m = 00;
        h = 00;
    }
    else {
        s += 1;
    }

    setTime(h, m, s);

}