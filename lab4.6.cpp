#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double P1, P2;
    int i, k;
    
    // перший спосіб
    P2 = 1;
    P1 = 1;
    i = 1;
    while(i <= 3)
    {
        k = 1;
        while(k <= 4 - i)
        {
            P2 += sin(i * pow(k, 2)) + cos(k * pow(i, 2));
            k++;
        }
        P1 *= P2 / (pow(k, 2) + pow(i, 2));
        i++;
    }
    cout << P1 << " first" << endl;
    
    // другий спосіб
    P2 = 1;
    P1 = 1;
    i = 1;
    do {
        k = 1;
        do {
            P2 += sin(i * pow(k, 2)) + cos(k * pow(i, 2));
            k++;
        } while(k <= 4 - i);
        P1 *= P2 / (pow(k, 2) + pow(i, 2));
        i++;
    } while(i <= 3);
    cout << P1 << " second" << endl;

    // третій спосіб
    P2 = 1;
    P1 = 1;
    for(i = 1; i <= 3; i++)
    {
        for(k = 1; k <= (4 - i); k++)
        {
            P2 += sin(i * pow(k, 2)) + cos(k * pow(i, 2));
        }
        P1 *= P2 / (pow(k, 2) + pow(i, 2));
    }
    cout << P1 << " third" << endl;

    // четвертий спосіб
    P2 = 1;
    P1 = 1; // Ініціалізуємо змінні знову

    for(i = 1; i <= 3; i++)  // Зміна на прямий цикл
    {
        for(k = 1; k <= 4 - i; k++)
        {
            P2 += sin(i * pow(k, 2)) + cos(k * pow(i, 2));
        }
        P1 *= P2 / (pow(k, 2) + pow(i, 2)); // Та сама формула
    }

    cout << P1 << " fourth" << endl;

    return 0;
}
