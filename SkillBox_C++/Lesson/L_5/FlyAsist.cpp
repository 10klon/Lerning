#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
   // SetConsoleCP(1251);        // кодировка для ввода (cin)
   // SetConsoleOutputCP(1251);  // кодировка для вывода (cout)
    cout << "_____Полет нормальный_____ \n";

    int speed, height;
    cout << "Введите какая скорость самолета?  ";
    cin >> speed, "\n";
    cout << "Введите какая высота самолета?  ";
    cin >> height, "\n";

    if (speed >= 750 && speed <= 850)
    {
        cout << "Скорость в норме! \n";
    }
    else {
        cout << "Измените скорость!  \n";

    }
    if (height >= 9000 && height <= 9500)
    {
        cout << "Высота в норме! \n";
    }
    else
    {
        cout << "Измените высоту!  \n";
    }
};