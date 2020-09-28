#pragma once
#include <string>

class Time
{
public:
	// Конструкторы
	Time();
	Time(int h, int m, int s);

	//геттеры и сеттеры	
	int get_second();			// Получение секунд
	
	int get_minutes();			// Получение минут
	
	int get_hours();			// Получение часов

	//// Методы
	//void outTime();				// Вывод времени на экран
	//Time* add_Time(Time);		// Сложение времени
	//Перегрузка
	//Операторы сложения/вычитания
	friend const Time operator+ (const Time &t1, const Time &t2);
	friend const Time operator- (const Time &t1, const Time &t2);
	//Операторы вывода/вывода
	friend std::ostream &operator<< (std::ostream &out, const Time &t);
	friend std::istream &operator>> (std::istream &in, Time &t);
	//Операторы сравнения
	friend bool operator== (const Time t1, const Time t2);
	friend bool operator!= (const Time t1, const Time t2);
	friend bool operator< (const Time t1, const Time t2);
	friend bool operator> (const Time t1, const Time t2);
	//Бинарные операторы
	friend Time operator+ (const int left, const Time rigth);
	friend Time operator+ (const Time left, const int rigrh);

private:
	int hours;
	int minutes;
	int second;
};