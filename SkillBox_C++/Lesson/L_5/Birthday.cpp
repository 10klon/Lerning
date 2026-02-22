#include <iostream>
using namespace std;

int main() {
    int todayDay, todayMonth, todayYear;
    int birthDay, birthMonth, birthYear;
    int age;

    cout << "Введите сегодняшнюю дату (день месяц год): ";
    cin >> todayDay >> todayMonth >> todayYear;

    cout << "Введите дату рождения покупателя (день месяц год): ";
    cin >> birthDay >> birthMonth >> birthYear;


    if (todayMonth < 1 || todayMonth > 12 || birthMonth < 1 || birthMonth > 12) {
        cout << "Ошибка: некорректный месяц!\n";
        return 1;
    }
    if (todayDay < 1 || birthDay < 1) {
        cout << "Ошибка: некорректный день!\n";
        return 1;
    }


    age = todayYear - birthYear;

 
    bool birthdayPassed = (todayMonth > birthMonth) ||
        (todayMonth == birthMonth && todayDay > birthDay);


    if (age > 18 || (age == 18 && birthdayPassed)) {
        cout << "Можно: покупатель достиг 18-летнего возраста.\n";
    } else {
        cout << "Нельзя: покупатель не достиг 18-летнего возраста.\n";
    }

    return 0;
}
