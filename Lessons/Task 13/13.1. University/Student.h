#pragma once
#include "human.h"
#include <string>
#include <vector>
#include <sstream>

class Student : public human {
    public:
        // ����������� ������ Student
        Student(std::string last_name, std::string name, std::string
            second_name,
            std::vector<int> scores) : human(last_name, name,
                second_name) {
            this->scores = scores;
        }
        // ��������� �������� ����� ��������
        float get_average_score()
        {
            // ����� ���������� ������
            unsigned int count_scores = this->scores.size();
            // ����� ���� ������ ��������
            unsigned int sum_scores = 0;
            // ������� ����
            float average_score;
            for (unsigned int i = 0; i < count_scores; ++i) {
                sum_scores += this->scores[i];
            }
            average_score = (float)sum_scores / (float)count_scores;
            return average_score;
        }

        std::string get_full_name() override
        {
            std::ostringstream full_name;
            full_name << last_name << " "
                << name << " "
                << second_name
                << "\n������� ���� : " << get_average_score();

            return full_name.str();
        }
    private:
        // ������ ��������
        std::vector<int> scores;
};