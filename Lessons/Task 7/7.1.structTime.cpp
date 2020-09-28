//Практическое занятие 6. Контрольное задание №1
//Структура Time
//От Духно Ильи гр.124/20

#include <iostream>

using namespace std;

struct Time
{
    int hours;
    int minutes;
    int second;

    Time inputTime()
    {        
        Time out;

        cout << "Введите часы минуты и секунды в формате hh mm ss\n";
        cin >> out.hours >> out.minutes >> out.second;

        out = out.convetTime();
        return out;
    }
    Time inputHours()
    {
        Time out;

        cout << "Введите часы в формате hh\n";
        cin >> out.hours;
        out.minutes = 0;
        out.second = 0;

        out = out.convetTime();
        return out;
    }
    Time inputMinutes()
    {
        Time out;

        cout << "Введите минуты в формате mm \n";
        cin >> out.minutes;
        out.hours = 0;
        out.second = 0;

        out = out.convetTime();
        return out;
    }
    Time inputSecond()
    {
        Time out;

        cout << "Введите секунды в формате ss\n";
        cin >> out.second;
        out.hours = 0;
        out.minutes = 0;

        out = out.convetTime();
        return out;
    }

    void outSecond()
    {
        int seconds = (hours * 3600) + (minutes * 60) + second;
        cout << "Всего секунд: " << seconds << "\n";
    }

    void outTime()
    {
        cout << hours << "h : " << minutes << "m : " << second << "s\n";
    }

    Time additionParams(Time t)
    {
        Time out;

        out.hours = hours + t.hours;
        out.minutes = minutes + t.minutes;
        out.second = second + t.second;

        out = out.convetTime();
        return out;
    }

    Time subParams(Time t)
    {
        Time out;

        out.hours = hours - t.hours;
        out.minutes = minutes - t.minutes;
        out.second = second - t.second;

        out = out.convetTime();
        return out;
    }

    Time convetTime()
    {
        Time out = {hours, minutes, second};

        if (hours < 0)
        {            
            out.hours = 0;
            out.minutes = 0;
            out.second = 0;
        }
        if (minutes < 0)
        {
            out.minutes = hours * 60 - minutes;            
        }
        if (second < 0)
        {
            out.second = minutes * 60 - second;
        }

        if (out.second > 60)
        {
            out.minutes = out.second / 60 + minutes;
            out.second = second % 60;
        }
        if (out.minutes > 60)
        {
            out.hours = out.minutes / 60 + hours;
            out.minutes = minutes % 60;
        }
        
        
        return out;
    }
};

int main()
{
    system("chcp 1251");

    Time t1, t2, t3, t4;
    
    t1 = t1.inputTime();
    t1.outSecond();
    cout << "t1: ";
    t1.outTime();

    t2 = t2.inputHours();    
    cout << "t2: ";
    t2.outTime();

    t3 = t2.additionParams(t1);
    cout << "Время t1 + t2 = ";
    t3.outTime();

    t4 = t4.inputMinutes();
    cout << "t4: ";
    t4.outTime();
    t4 = t1.subParams(t4);
    cout << "Время t1 - t4 = ";
    t4.outTime();
}