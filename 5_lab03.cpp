#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    double e;
    cout << "Введите малое положительное число: ";
    cin >> e;

    double sum = 0.0;
    int k = 0;
    double term;

    do
    {
        term = 1.0 / (2 * k + 1);
        if (k % 2 == 1)
        {
            term = -term;
        }
        sum += term;
        k++;
    } while (fabs(term) >= e);

    cout << "Приближенная сумма: " << sum << endl;
    cout << "Теоретическое значение π/4: " << M_PI / 4 << endl;
    cout << "Количество слагаемых: " << k << endl;

    return 0;
}