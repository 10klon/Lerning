#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
    SetConsoleCP(1251);        // кодировка для ввода (cin)
    SetConsoleOutputCP(1251);  // кодировка для вывода (cout)
    int profit;
    int tax;
    int tax1 = 13;//13 % до 10 000
    int tax2 = 20;//20 % до 50 000
    int tax3 = 30;//30 % Свыше 50 000


    cout << "______Прогрессивный расчет налогов______: \n";

    cout << "Введите ваш доход: ";
    if (!(cin >> profit)) {
        cout << "Ошибка: введите числовое значение!" << "\n";
      
    }

    // Проверка на отрицательное значение
    if (profit < 0) {
        cout << "Ошибка: доход не может быть отрицательным!" << "\n";
       
    }

    if (profit <= 10000)
    {
        tax = profit * 13 / 100;
    }
    else if (profit > 10000 && profit <= 50000)
    {
        tax = 10000 * tax1 / 100 + (profit - 10000) * tax2 / 100;

    }
    else if (profit > 50000)
    {
        tax = 10000 * tax1 / 100  + 40000 * tax2 / 100  + (profit - 50000) * tax3 / 100;
    }
    
    

};







            


	




























            


	




















