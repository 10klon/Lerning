#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
    //SetConsoleCP(1251);        // кодировка для ввода (cin)
    //SetConsoleOutputCP(1251);  // кодировка для вывода (cout)
    int  profit;
    cout << "______Прогрессивный расчет налогов______: \n";
    
    //Проверка введено ли число
    cout << "Введите ваш доход: ";
    if (!(cin >> profit)) {
        cout << "Ошибка: введите числовое значение!" << "\n";
        return 1;
    }

    // Проверка на отрицательное значение
    if (profit < 0) {
        cout << "Ошибка: доход не может быть отрицательным!" << "\n";
        return 1;
    }

    int tax = 0;

   
    if (profit <= 10000 && profit != 0) {
        
        tax = profit * 0.13;
    }
    else if (profit <= 50000 && profit > 10000) {
       
        tax = 10000 * 0.13 + (profit - 10000) * 0.20;
    }
    else {
       
        tax = 10000 * 0.13 + 40000 * 0.20 + (profit - 50000) * 0.30;
    }

    
    
    cout << "Сумма налога: " << tax << "\n";

    std::cout << "Нажмите Enter для продолжения ... ";
    std::cin.get();
    std::cin.get();

    return 0;

};







            


	




























            


	




















