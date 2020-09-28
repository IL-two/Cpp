#include "Time.h"
#include <iostream>
#include <string>
#include "ExError.h"

using namespace std;

Time::Time()
{   
	Time::hours = 0;
	Time::minutes = 0;
	Time::second = 0;
}

Time::Time(int hourse, int minutes, int second)
{
    Time::hours = hourse;
    Time::minutes = minutes;
    Time::second = second;

    if (hourse < 0)
    {
        throw ExError("Время отрицательным быть не может.");
        Time::hours = 0;
        Time::minutes = 0;
        Time::second = 0;
    }
    else if (minutes < 0)
    {
        Time::minutes = hours * 60 - minutes;
    }
    else if (second < 0)
    {
        Time::second = minutes * 60 - second;
    }

    if (second > 59)
    {
        Time::minutes = second / 60 + minutes;
        Time::second = second % 60;
    }
    if (minutes > 59)
    {
        Time::hours = minutes / 60 + hourse;
        Time::minutes = minutes % 60;
    }    
}

void Time::outTime()
{
    cout << Time::hours << "h : " << Time::minutes << "m : " << Time::second << "s\n";
}

Time* Time::add_Time(Time t1)
{
    Time *out = new Time(Time::hours + t1.hours,
                         Time::minutes + t1.minutes,
                         Time::second + t1.second);

    return out;
}

int Time::get_second()
{
    return Time::second;
}

int Time::get_minutes()
{
    return Time::minutes;
}

int Time::get_hours()
{
    return Time::hours;
}

Time::~Time() {}