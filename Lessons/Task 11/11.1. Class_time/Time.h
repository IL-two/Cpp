#pragma once
#include <string>

class Time
{
public:
	// ������������
	Time();
	Time(int h, int m, int s);

	//������� � �������	
	int get_second();			// ��������� ������
	
	int get_minutes();			// ��������� �����
	
	int get_hours();			// ��������� �����

	//// ������
	//void outTime();				// ����� ������� �� �����
	//Time* add_Time(Time);		// �������� �������
	//����������
	//��������� ��������/���������
	friend const Time operator+ (const Time &t1, const Time &t2);
	friend const Time operator- (const Time &t1, const Time &t2);
	//��������� ������/������
	friend std::ostream &operator<< (std::ostream &out, const Time &t);
	friend std::istream &operator>> (std::istream &in, Time &t);
	//��������� ���������
	friend bool operator== (const Time t1, const Time t2);
	friend bool operator!= (const Time t1, const Time t2);
	friend bool operator< (const Time t1, const Time t2);
	friend bool operator> (const Time t1, const Time t2);
	//�������� ���������
	friend Time operator+ (const int left, const Time rigth);
	friend Time operator+ (const Time left, const int rigrh);

private:
	int hours;
	int minutes;
	int second;
};