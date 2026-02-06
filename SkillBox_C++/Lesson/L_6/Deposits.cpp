#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
    SetConsoleCP(1251);        // кодировка для ввода (cin)
    SetConsoleOutputCP(1251);  // кодировка для вывода (cout)

    cout << "_____Вклады_____\n";
    cout << "Введите размер вклада:\n";
    cout << "Введите процентную ставку:\n";
    cout << "Введите желаемую сумму:\n";



    long long cash, percent, value;
    long long temp = 0;
    int year = 0;



    if (!(cin >> cash >> percent >> value) || cash <= 0 || percent <= 0 || value <= 0) {


        cout << " Ошибка некорректный ввод!\n";

        return 1;



    }



    while (value >= cash)
    {


        temp = cash * percent / 100;
        cash += temp;
        ++year;

    }
    bool fine = value <= cash;

    if (fine)cout << "Придётся подождать :" << year << " лет";
}
