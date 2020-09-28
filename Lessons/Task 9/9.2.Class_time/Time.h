#pragma once
#include <string>

class Time
{
public:
	// Конструкторы
	Time();
	Time(int, int, int);
	~Time();

	//геттеры и сеттеры	
	int get_second();			// Получение секунд
	
	int get_minutes();			// Получение минут
	
	int get_hours();			// Получение часов

	// Методы
	void outTime();				// Вывод времени на экран
	Time* add_Time(Time);		// Сложение времени

private:
	int hours;
	int minutes;
	int second;
};