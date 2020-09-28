//Практическое занятие 6. Контрольное задание №2
//Запись массива в файл
//От Духно Ильи гр.124/20


#include <iostream>
#include <fstream>

using namespace std;

void show_array(const int Arr[], const int n);
bool from_min(const int a, const int b);
bool from_max(const int a, const int b);
void bubble_sort(int Arr[], const int n, bool (*compare)(int a, int b));
void newArrayLenght(int& n);
void newArray(int Arr[], int n);
void saveArray(const int Arr[], int n);
void saveArray(const int Arr[], int n, int choise);

int main()
{
    system("chcp 1251");

    int n;

    newArrayLenght(n);

    int* a = new int[n];

    newArray(a, n);

    saveArray(a, n);
    cout << "Массив сохранен в файл save_array.txt\n";

    int choose = 0;

    bool (*from_f[2])(int, int) = { from_min,from_max };

    cout << "1. Сортировать по возврастанию\n" << "2. Сортировать по убыванию\n";
    cin >> choose;
    show_array(a, n);

    bubble_sort(a, n, (*from_f[choose - 1]));

    cout << "Отсортированыый массив: " << endl;
    show_array(a, n);
    saveArray(a, n, choose);
    cout << "Файл save_array.txt обновлен\n";

    delete[] a;
}

void show_array(const int Arr[], const int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << Arr[i] << " ";
    }
    cout << "\n";
}

bool from_min(const int a, const int b)
{
    return a > b;
}

bool from_max(const int a, const int b)
{
    return a < b;
}

void bubble_sort(int Arr[], const int n, bool (*compare)(int a, int b))
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if ((*compare)(Arr[j], Arr[j + 1])) swap(Arr[j], Arr[j + 1]);
        }
    }
}

void newArrayLenght(int& n)
{
    cout << "Введите длину массива: ";
    cin >> n;
}

void newArray(int Arr[], int n)
{
    cout << "Введите массив:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "mas[" << i << "] = ";
        cin >> Arr[i];
    }
}

void saveArray(const int Arr[], int n)
{
    ofstream out("save_array.txt", ios::out | ios::binary);

    if (!out)
    {
        cout << "Файл невозможно открыть" << endl;
        return;
    }

    out << "Исходный массив:\n";
    for (int i = 0; i < n; i++)
    {
        out << Arr[i] << " ";
    }
    out << "\n";

    out.close();
}

void saveArray(const int Arr[], int n, int choise)
{
    string  str = "";

    ofstream out("save_array.txt", ios_base::app | ios::binary);

    if (!out)
    {
        cout << "Файл невозможно открыть" << endl;
        return;
    }

    switch (choise)
    {
    case 1:
        str = "Отсортированый массив по возврастанию:\n";
        break;
    case 2:
        str = "Отсортированый массив по убыванию:\n";
        break;
    default:
        str = "vass...";
        break;
    }
    
    out << str;
    for (int i = 0; i < n; i++)
    {
        out << Arr[i] << " ";
    }

    out << "\n";

    out.close();
}