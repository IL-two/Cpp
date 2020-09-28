//Практическое занятие 2. Контрольное задание №3
//Программа размена монет
//От Духно Ильи гр.124/20

#include <iostream>

using namespace std;

int main()
{
    system("chcp 1251");
    
    int sum;
    int note[11] = { 5000, 2000, 1000, 500, 200, 100, 50, 10, 5, 2, 1 };

    cout << "-------------------------------------------------------\n";
    cout << "В наличии присутствуют купюры достоинством:\n";
    for (int i = 0; i < size(note); i++)
    {
        cout << note[i] << " ";
    }
    cout << "\n-------------------------------------------------------\n";

    cout << "\nВведите сумму для обмена:\n";
    cin >> sum;

    if (sum > 0)
    {
        for (int i = 0; i < size(note); i++)
        {
            if (sum <= 0)
            {
                cout << "\nРазмен произведен\n";
                break;
            }

            if ((sum % note[i]) < sum)
                {
                    int result = sum / note[i];
                    sum = sum - (note[i] * result);
                    cout << "Количество купюр достоинством " << note[i] << ": " << result << endl;
                }
        }
    }
    else
    {
        cout << "\nРазмен не может быть произведен\n";
    }
}