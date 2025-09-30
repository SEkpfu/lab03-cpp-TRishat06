#include <windows.h>
#include <iostream>
#include <climits>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int number;
    int negativeCount = 0;
    int sumTwoDigit = 0;
    int minNumber = INT_MAX;

    cout << "Введите 7 целых чисел:" << endl;

    for (int i = 0; i < 7; i++)
    {
        cout << "Число " << i + 1 << ": ";
        cin >> number;
        if (number < 0)
        {
            negativeCount++;
        }
        if ((number >= 10 && number <= 99) || (number <= -10 && number >= -99))
        {
            sumTwoDigit += number;
        }
        if (number < minNumber)
        {
            minNumber = number;
        }
    }

    cout << "a) Количество отрицательных чисел: " << negativeCount << endl;
    cout << "b) Сумма двузначных чисел: " << sumTwoDigit << endl;
    cout << "c) Наименьшее число: " << minNumber << endl;

    return 0;
}