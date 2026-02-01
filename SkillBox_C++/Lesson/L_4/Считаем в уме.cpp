#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
   // SetConsoleCP(1251);        // кодировка для ввода (cin)
   // SetConsoleOutputCP(1251);  // кодировка для вывода (cout)
    int num1, num2, summ;
    
    cout << " _____Складываем в уме_____\n";

    cout << " Введите первое число: ";

    cin >> num1, "\n";
    cout << " Введите второе число: ";
    cin >> num2, "\n";
    cout << " Введите их сумму: ";
    cin >> summ, "\n";
    cout << " Проверяем ответ \n";
    if (num1 + num2 == summ) {
        cout << " Верно \n";
    }
    else {
        cout << " Ошибка! Верный результат:" << summ << "\n";

    }
    
    std::cout << "Нажмите Enter для продолжения ... ";
    std::cin.get();
    std::cin.get();
};