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
        throw ExError("¬рем€ отрицательным быть не может.");
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

//void Time::outTime()
//{
//    cout << Time::hours << "h : " << Time::minutes << "m : " << Time::second << "s\n";
//}

//Time* Time::add_Time(Time t1)
//{
//    Time *out = new Time(Time::hours + t1.hours,
//                         Time::minutes + t1.minutes,
//                         Time::second + t1.second);
//
//    return out;
//}

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

Time const operator+ (const Time &t1, const Time &t2)
{
    int h = t1.hours + t2.hours;
    int m = t1.minutes + t2.minutes;
    int s = t1.second + t2.second;
    return Time(h, m, s);
}
Time const operator- (const Time &t1, const Time &t2)
{
    int h = t1.hours - t2.hours;
    int m = t1.minutes - t2.minutes;
    int s = t1.second - t2.second;
    return Time(h, m, s);
}

std::ostream& operator<<(std::ostream& out, const Time& t)
{
    out << t.hours << "h : " << t.minutes << "m : " << t.second << "s\n";
    return out;
}

std::istream& operator>>(std::istream& in, Time& t)
{
    int h, m, s;
    cout << "¬ведите часы минуты и секунды в формате hh mm ss\n";
    in >> h;
    in >> m;
    in >> s;

    t.hours = h;
    t.minutes = m;
    t.second = s;

    if (h < 0)
    {
        throw ExError("¬рем€ отрицательным быть не может.");
        t.hours = 0;
        t.minutes = 0;
        t.second = 0;
    }
    else if (m < 0)
    {
        t.minutes = h * 60 - m;
    }
    else if (s < 0)
    {
        t.second = m * 60 - s;
    }

    if (s > 59)
    {
        t.minutes = s / 60 + m;
        t.second = s % 60;
    }
    if (m > 59)
    {
        t.hours = m / 60 + h;
        t.minutes = m % 60;
    }
    return in;
}

bool operator==(const Time t1, const Time t2)
{   
    return t1.hours == t2.hours && t1.minutes == t2.minutes && t1.second == t2.second;
}

bool operator!=(const Time t1, const Time t2)
{
    return t1.hours != t2.hours && t1.minutes != t2.minutes && t1.second != t2.second;
}

bool operator<(const Time t1, const Time t2)
{
    if (t1.hours < t2.hours)
    {        
        return true;
    }
    else if (t1.hours == t1.hours)
    {
        if (t1.minutes < t2.minutes)
        {
            return true;
        }
        else if (t1.minutes == t2.minutes)
        {
            if (t1.second < t2.second)
            {
                return true;
            }
        }
        else
        {
            return false;
        }        
    }
    
    return false;
    
}

bool operator>(const Time t1, const Time t2)
{
    if (t1.hours > t2.hours)
    {
        return true;
    }
    else if (t1.hours == t1.hours)
    {
        if (t1.minutes > t2.minutes)
        {
            return true;
        }
        else if (t1.minutes == t2.minutes)
        {
            if (t1.second > t2.second)
            {
                return true;
            }
        }
        else
        {
            return false;
        }
    }
   
    return false;
   
}

Time operator+(const int left, const Time rigth)
{

    return Time(rigth.hours, rigth.minutes, rigth.second + left);
}

Time operator+(const Time left, const int rigrh)
{
    return Time(left.hours, left.minutes, left.second + rigrh);
}
