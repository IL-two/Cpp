#pragma once
class Time
{
public:
	// ������������
	Time();
	Time(int, int, int);
	~Time();

	//������� � �������	
	int get_second();			// ��������� ������
	
	int get_minutes();			// ��������� �����
	
	int get_hours();			// ��������� �����

	// ������
	void outTime();				// ����� ������� �� �����
	Time* add_Time(Time);		// �������� �������

private:
	int hours;
	int minutes;
	int second;
};

