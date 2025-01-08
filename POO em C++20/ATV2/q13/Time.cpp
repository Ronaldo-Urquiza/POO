#include <iostream>
#include <format>
using std::cout, std::endl, std::format;
#include <chrono> //Biblioteca para tempo

#include "Time.h"

Time::Time(int hr, int min, int sec)
{
    setTime(hr, min, sec);
    //qualquer modificação posterior em setTime reflete no construtor
}

// cnsttr sobrecarregado (hora do sistema)
Time::Time() {
    // Usa std::chrono para pegar o tempo atual do sistema
    auto now = std::chrono::system_clock::now();
    auto t = std::chrono::system_clock::to_time_t(now);
    struct tm *localTime = localtime(&t);

    setHour(localTime->tm_hour);   // Define a hora
    setMinute(localTime->tm_min);  // Define o minuto
    setSecond(localTime->tm_sec);  // Define o segundo
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
