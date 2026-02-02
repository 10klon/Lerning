#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;



int main() {
    SetConsoleCP(1251);        // кодировка для ввода (cin)
    SetConsoleOutputCP(1251);  // кодировка для вывода (cout)

    long long  exp; // для больший чисел

    cout << "__________Калькулятор опыта____________ : \n";

    cout << "Введите число очков опыта: \n";
    if (!(cin >> exp)) {
        cout << "Ошибка: введено не число! \n";

    }

    cout << "-----Считаем-----\n";

    int lvl = 1;


    if (exp >= 5000) {
        lvl = 4;
    }
    else if (exp >= 2500) {
        lvl = 3;
    }
    else if (exp >= 1000) {
        lvl = 2;
    }
    else if (exp < 0) {
        cout << "Ошибка: введено отрицательное число! \n";


    }

    cout << "Ваш уровень: " << lvl << "\n";


    std::cout << "Нажмите Enter для продолжения ... ";
    std::cin.get();
    std::cin.get();

    return 0;


};




 



























































			


































































