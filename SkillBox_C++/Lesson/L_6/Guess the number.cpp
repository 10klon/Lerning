#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
    SetConsoleCP(1251);        // кодировка для ввода (cin)
    SetConsoleOutputCP(1251);  // кодировка для вывода (cout)

    cout << "Загадайте число от 0 до 63. Я попробую его угадать!\n";

    int number;
    int maybeNumber = 32;
    int a = 16;


    while (true)
    {
        string text;
        if (a == 0)
        {
            cout << "Это число  " << maybeNumber;
            cout << " Ура! Я угадал!\n";
            break;

        }

        cout << "Это число " << maybeNumber << " или больше ? (Угадал/да/нет/): ";
        cin >> text;
        if ((text != "да") && (text != "нет") && (text != "Угадал"))
        {
            cout << " Ответ нераспознан!\n";
            continue;
        }
        if (text == "Угадал") {
            cout << "Ура! Я угадал!\n";
            break;
        }


        if (text != "да")
        {
            maybeNumber = maybeNumber - a;

            a /= 2;

        }
        else if (text == "да")
        {
            maybeNumber = maybeNumber + a;
            a /= 2;



        }
        else if (maybeNumber == 1) {
            maybeNumber = 0;
            cout << "Это число " << maybeNumber;
            cout << "Ура! Я угадал!\n";
            break;

        }

    }

}
