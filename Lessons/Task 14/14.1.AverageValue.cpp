//Практическое занятие 14. Контрольное задание №1
//Шаблон функции, возвращающей среднее арифметическое всех элементов массива
//От Духно Ильи гр.124/20

#include <iostream>

using namespace std;

template<class T>
void sorting(T arr[], int size) {
    int j = 0;
    for (int i = 0; i < size; i++) {
        T x = arr[i];
        for (j = i - 1; j >= 0 && x < arr[j]; j--)
            arr[j + 1] = arr[j];
        arr[j + 1] = x;
    }
}
template<class T>
void outArr(T arr[], int size)
{
    for (int i = 0; i < size; i++) cout << arr[i] << "; ";
    cout << endl;
}
//Шаблон функции возвращающей среднее арифметическое всех элементов массива
template<class T> T average_value(T arr[], int size)
{    
    if (typeid(T) == typeid(char))
    {
        int sumCh = 0;

        for (int i = 0; i < size; i++)
        {
            sumCh += (int)arr[i];
        }
        return (sumCh / size);
    }
    else
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += arr[i];
        }
        return (sum / size);
    }
}

int main()
{
    system("chcp 1251");
    int arr[] = { -5, 0, 9, 3, 17, 6, 5, 4, 31, 2, 12 };
    double arrd[] = { 2.1, 2.3, 1.7, 6.6, 5.3, 2.44, 3.1, 2.4, 1.2 };
    long arrL[] = {-100, 200, 400, -700, 50, 999};
    char arrc[] = "Hello, word";
    int k1 = sizeof(arr) / sizeof(arr[0]);
    int k2 = sizeof(arrd) / sizeof(arrd[0]);
    int k3 = sizeof(arrc) / sizeof(arrc[0]) - 1;
    int k4 = sizeof(arrL) / sizeof(arrL[0]);

    cout << "Среднее арифметическое массива int:\n" << average_value(arr, k1) << endl;
    cout << "Среднее арифметическое массива double:\n" << average_value(arrd, k2) << endl;
    cout << "Среднее арифметическое массива char:\n" << average_value(arrc, k3) << endl;
    cout << "Среднее арифметическое массива long:\n" << average_value(arrL, k4) << endl;
}