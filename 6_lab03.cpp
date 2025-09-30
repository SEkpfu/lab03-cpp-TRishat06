#include <windows.h>
#include <iostream>
using namespace std;

int main()
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
    setlocale(LC_ALL, "ru_RU.UTF-8");

    int number;
    int totalCount = 0;
    int chetCount = 0;
    char next;

    do
    {
        cout << "Введите целое число: ";
        cin >> number;
        totalCount++;

        if (number % 2 == 0)
        {
            chetCount++;
        }

        cout << "Продолжить ввод? y/n : ";
        cin >> next;
    } while (next == 'y' || next == 'Y');

    cout << "Общее количество введенных чисел: " << totalCount << endl;
    cout << "Количество четных чисел: " << chetCount << endl;

    return 0;
}