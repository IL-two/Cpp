//Практическое занятие 5. Контрольное задание №1
//Работа с данными в массиве
//От Духно Ильи гр.124/20

#include <iostream>

using namespace std;

void newArrayLenght(int& n);
void newArray(int Arr[], int n);
void summElementsArray(int mas[], int n);
void summNegativeElements(int mas[], int n);
void summPositiveElements(int mas[], int n);
void summOddElements(int mas[], int n);
void summEvenElements(int mas[], int n);
void maxElements(int mas[], int n);
void minElements(int mas[], int n);
void show_array(int mas[], int n);
void sortArrayBySelect(int mas[], int n);

int main()
{
    system("chcp 1251");

    int n;

    newArrayLenght(n);

    int* mas = new int[n];

    newArray(mas, n);

    summElementsArray(mas, n); //Сумма элементов массива и их среднее значение

    summNegativeElements(mas, n); //Сумма отрицательных элементов

    summPositiveElements(mas, n); //Сумма положительных элементов

    summOddElements(mas, n); //Сумма нечетных элементов
    
    summEvenElements(mas, n); //Сумма четных элементов

    maxElements(mas, n); //Максимальный элемент

    minElements(mas, n); //Минимальный элемент

    sortArrayBySelect(mas, n); // Сортировка выбором

    delete[] mas;
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

void summElementsArray(int mas[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += abs(mas[i]);
    }
    cout << "Сумма элементов массива " << s << endl;
    cout << "Среднее значение элементов массива " << s / n << endl;
}

void summNegativeElements(int mas[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++) 
    {
        if (mas[i] < 0) s += mas[i];
    }
    cout << "Сумма отрицательных элементов массива " << s << endl;
}

void summPositiveElements(int mas[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++) 
    {
        if (mas[i] > 0) s += mas[i];
    }

    cout << "Сумма положительных элементов массива " << s << endl;
}

void summOddElements(int mas[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++) 
    {
        if (!(mas[i] % 2 == 0)) s += abs(mas[i]);
    }

    cout << "Сумма нечетных элементов массива " << s << endl;
}

void summEvenElements(int mas[], int n)
{
    int s = 0;
    for (int i = 0; i < n; i++) 
    {
        if (mas[i] % 2 == 0) s += abs(mas[i]);
    }

    cout << "Сумма четных элементов массива " << s << endl;
}

void maxElements(int mas[], int n)
{
    int s = mas[0];
    for (int i = 1; i < n; i++) 
    {
        if (s < mas[i]) s = mas[i];
    }

    cout << "Максимальный элемент массива " << s << endl;
}

void minElements(int mas[], int n)
{
    int s = mas[0];
    for (int i = 1; i < n; i++) 
    {
        if (s > mas[i]) s = mas[i];
    }

    cout << "Минимальный элемент массива " << s << endl;
}

void show_array(int mas[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << mas[i] << " ";
    }
    cout << "\n";
}

void sortArrayBySelect(int mas[], int n)
{
    int min = 0;
    int buf = 0;

    for (int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            min = (mas[j] < mas[min]) ? j : min;
        }
        if (i != min)
        {
            buf = mas[i];
            mas[i] = mas[min];
            mas[min] = buf;
        }
    }

    cout << "Отсортированный масив методом выбора: " << endl;
    show_array(mas, n);
}