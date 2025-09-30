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
    int maxNumber = INT_MIN;
    int countMax = 0;

    cout << "Введите последовательность натуральных чисел (0 для завершения):" << endl;

    do
    {
        cin >> number;

        if (number != 0)
        {
            if (number > maxNumber)
            {
                maxNumber = number;
                countMax = 1;
            }
            else if (number == maxNumber)
            {
                countMax++;
            }
        }
    } while (number != 0);

    if (maxNumber != INT_MIN)
    {
        cout << "Наибольший элемент: " << maxNumber << endl;
        cout << "Количество элементов, равных наибольшему: " << countMax << endl;
    }
    else
    {
        cout << "Не было введено чисел!" << endl;
    }

    return 0;
}