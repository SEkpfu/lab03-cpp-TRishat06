#include <windows.h>
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n;
    double x;

    cout << "Введите n: ";
    cin >> n;
    cout << "Введите x: ";
    cin >> x;

    double resultA = cos(x);
    for (int i = 1; i < n; i++)
    {
        resultA = cos(x + resultA);
    }
    cout << "a) Результат: " << resultA << endl;

    double resultB = sqrt(x);
    for (int i = 1; i < n; i++)
    {
        resultB = sqrt(x + resultB);
    }
    resultB = x + resultB;
    cout << "b) Результат: " << resultB << endl;

    return 0;
}