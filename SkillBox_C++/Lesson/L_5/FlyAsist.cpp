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
    cout << "Введите какая скорость и высоту самолета\n ";
    cin >> speed; cin >> height;
   
    if (speed >= 750 && speed <= 850 && height >= 9000 && height <= 9500)
    {
        cout << "Полёт нормальный! \n";
    }
    else {
        cout << "Самолёт летит неправильно!  \n";

  
};
