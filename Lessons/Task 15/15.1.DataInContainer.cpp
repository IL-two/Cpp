//Практическое занятие 15. Контрольное задание №1
//Организация хранения данных в контейнере
//От Духно Ильи гр.124/20

#include <iostream>
#include <map>

using namespace std;

struct student
{
    string name;
    char score;
};
// Вывод всей группы студентов
void printGroup(map<string, char> group) 
{
    for (auto it = group.begin(); it != group.end(); ++it)
    {
        cout << it->first << " : " << it->second << endl;
    }
}
//Добавление студента в группу
void newStudent(map<string, char> &group)
{
    student st;
    cout << "Введиет имя студента: ";
    cin >> st.name;

    cout << "Введите оцеку студента: ";
    cin >> st.score;

    group.insert(pair<string, char>(st.name, st.score));
}
//Изменение оценки у студента
void changeScore(map<string, char> &group)
{
    student st;
    char check;
    cout << "Введиет имя студента которому необходимо изменить оценку: ";
    cin >> st.name;
    cout << "У студента \'" << st.name << "\' оценка: " << group.at(st.name) << endl;
    cout << "Изменить оченку? (Y/N)";
    cin >> check;

    if (check == 'Y' || check == 'y')
    {
        cout << "Введите новую оценку: ";
        cin >> st.score;
        group.at(st.name) = st.score;
    }
}

int main()
{
    system("chcp 1251");  
    map<string, char> students;
    map<string, char>::iterator iter;

    int val;
    cout << "Сколько студентов необходимо добавить?\n";
    cin >> val;

    for (int i = 0; i < val; i++)
    {
        newStudent(students);
    }
   
    students.insert(pair<string, char>("Илья", '4'));
    students.insert(pair<string, char>("Василий", '5'));
    students.insert(pair<string, char>("Петя", '3'));

    printGroup(students);

    changeScore(students);

    printGroup(students);
}