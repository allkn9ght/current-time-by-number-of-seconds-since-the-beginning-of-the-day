#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int second;
    int seconds;
    int minutes;
    int hours;

    cout << "Программа определяет текущее время по количеству секунд с начала суток\n";
    cout << "Введите количество секунд, прошедших с начала суток: ";
    cin >> second;

    seconds = (second % 3600) % 60;
    minutes = (second % 3600) / 60;
    hours = second / 3600;

    cout << "Прошло " << hours << " Час(-а,-ов) \n"
     << minutes << " минут\n"
     << seconds << " секунд с начала суток\n" << endl;

     cout << "Для выхода нажмите <Enter>.. ";
     fflush(stdin);
     cin.get();
     return 0;
}
