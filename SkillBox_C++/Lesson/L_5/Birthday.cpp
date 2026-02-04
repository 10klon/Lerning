#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
    SetConsoleCP(1251);        // кодировка для ввода (cin)
    SetConsoleOutputCP(1251);  // кодировка для вывода (cout)
    int todayDay, todayMonth, todayYear;
    int birthDay, birthMonth, birthYear;
    int age;


    
    cout << "Введите сегодняшнюю дату (день месяц год): ";
    cin >> todayDay >> todayMonth >> todayYear;

    
    cout << "Введите дату рождения покупателя (день месяц год): ";
    cin >> birthDay >> birthMonth >> birthYear;

    
    age = todayYear - birthYear;
    if (age > 18)
    {
        cout << "можно" << endl;
        return 0;

    }


    
    bool birthdayPassed = (todayMonth > birthMonth) ||
        (todayMonth == birthMonth && todayDay > birthDay);


    
    if (birthdayPassed) {
        cout << "можно" << endl;
    }
    else {
        cout << "нельзя" << endl;
    }

    return 0;
}
