//Практическое занятие 2. Контрольное задание №4
//Программа стрельбы по мишеням
//От Духно Ильи гр.124/20

#include <iostream>
#include <ctime>
#include <cmath>

using namespace std;


#include <iostream>

int main()
{
    system("chcp 1251");
    srand(time(0));

    int result = 0;                                 //Результат

    double targetX, targetY, target;                   //Координаты мишени
    double shootX, shootY, shoot;                      //Координаты выстрела   
    int shoots = 0;                                 //Счетчик выстрелов

    targetX = rand() % 5;
    targetY = rand() % 5;    
        
    cout << "Добро пожаловать на стрельбище!\n";
    cout << "Мишень стоит в диапазоне от -5 до 5\n";
    cout << "Вам нужно хорошо прицелиться, для этого введите два числа (например -3 и 2.7).\nОни будут являться координатами выстрела.\nУ вас есть 20 выстрелов.\n" << "Удачи!\n";
    //cout << "Координаты мишени [" << targetX << " : " << targetY << "] " << endl;
        
    do
    {
        cout << "-------------------------------------------------" << endl;
        cout << "Огонь!" << endl;
        cin >> shootX >> shootY;        

        shootX = shootX + (((rand() % 4) - 2) * 0.1 );          //Формарование рандомного смешениея выстрела
        shootY = shootY + (((rand() % 4) - 2) * 0.1 );

        cout << "Пуля попала в точку: [" << shootX << " : " << shootY << "] " << endl;

        shoot = sqrt(pow(shootX - targetX, 2) + pow(shootY - targetY, 2));

        if (shoot <= 3)
        {
            if (shoot <= 1)
            {
                result += 25;
                cout << "В яблочко! За выстрел вы получили 25 баллов!\n";
            }
            else if (shoot <= 2)
            {
                result += 10;
                cout << "За выстрел вы получили 10 баллов!\n";
            }
            else
            {
                result += 5;
                cout << "За выстрел вы получили 5 баллов!\n";
            }
        }
        else
        {
            cout << "Вы не попали в мешень\n";
        }

        shoots++;
        cout << "Осталось " << 20 - shoots << " выстрелов\n";

    } while (result < 50 && shoots < 20);
    
    cout << "-------------------------------------------------" << endl;
    cout << "Координаты мишени [" << targetX << " : " << targetY << "] " << endl;

    if (shoots <= 5)
    {
        cout << "Вы заслужили ранг снайпера!\n" << "Вы получили : " << result << " баллов всего за " << shoots << " выстрелов" << endl;
    }
    else if (shoots <= 15)
    {
        cout << "Очень неплохой результат!\n" << "Вы получили : " << result << " баллов за " << shoots << " выстрелов" << endl;
    }
    else
    {
        cout << "Вам нужно больше тренироваться\n" << "Вы получили : " << result << " баллов за " << shoots << " выстрелов" << endl;
    }
    
}

