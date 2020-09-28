//Практическое занятие 6. Контрольное задание №1
//Запись стихотворения в файл
//От Духно Ильи гр.124/20

#include <iostream>
#include <fstream>

using namespace std;

void name_poem(string& name); //Название стихотворения
void save_poem(string name);
void read_text(string name);

int main()
{
    system("chcp 1251");

    string name;

    cout << "Придумайте название для своего стихотворения \n(Файл будет иметь такое же название)" << endl;
    name_poem(name);

    save_poem(name);

    read_text(name);
}

void name_poem(string& name)
{    
    cin >> name;
    name = name + ".txt";
}


void save_poem(string name)
{
    const int MAX = 100;
    char str[MAX];

    ofstream out(name, ios::out | ios::binary);
    cout << "Введите текст стихотворения. Введите # как только закончите стихотварение и ваш текст сохранится" << endl;

    if (!out)
    {
        cout << "Файл невозможно открыть" << endl;
        return;
    }
        
    cin.get(str, MAX, '#');

    out << str << "\n";

    out.close();
}

void read_text(string name)
{
    char text;
    ifstream in(name, ios::in, ios::binary);
    if (!in)
    {
        cout << "Файл невозможно открыть" << endl;
        return;
    }

    while (in.get(text))
    {
        cout << text;
    }

    in.close();    
}