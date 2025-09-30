#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int n;
    double sum = 0.0;

    cout << "Введите n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / (2 * i);
    }

    cout << "S = " << sum << endl;

    return 0;
}