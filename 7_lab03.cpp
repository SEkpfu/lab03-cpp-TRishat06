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
    cout << "Введите количество вершин: ";
    cin >> n;
    double perimeter = 0.0;
    double first_x, first_y, prev_x, prev_y, current_x, current_y;
    cout << "Введите координаты вершин:" << endl;
    cout << "Вершина 1 (x y): ";
    cin >> first_x >> first_y;
    prev_x = first_x;
    prev_y = first_y;
    for (int i = 1; i < n; i++)
    {
        cout << "Вершина " << i + 1 << " (x y): ";
        cin >> current_x >> current_y;

        double dx = current_x - prev_x;
        double dy = current_y - prev_y;
        perimeter += sqrt(dx * dx + dy * dy);

        prev_x = current_x;
        prev_y = current_y;
    }
    double dx = first_x - prev_x;
    double dy = first_y - prev_y;
    perimeter += sqrt(dx * dx + dy * dy);
    cout << "Периметр=" << perimeter << endl;
    return 0;
}