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

    cout << "��������� ���������� ������� ����� �� ���������� ������ � ������ �����\n";
    cout << "������� ���������� ������, ��������� � ������ �����: ";
    cin >> second;

    seconds = (second % 3600) % 60;
    minutes = (second % 3600) / 60;
    hours = second / 3600;

    cout << "������ " << hours << " ���(-�,-��) \n"
     << minutes << " �����\n"
     << seconds << " ������ � ������ �����\n" << endl;

     cout << "��� ������ ������� <Enter>.. ";
     fflush(stdin);
     cin.get();
     return 0;
}
