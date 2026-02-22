#include <iostream>
using namespace std;

int main() {
    cout << "_____Майские!_____\n";
    int day;
    int firstDay;

    cout << "Введите первый день месяца (1-7, где 1 — понедельник, 7 — воскресенье):\n";
    cin >> firstDay;

   
    if (firstDay < 1 || firstDay > 7) {
        cout << "Некорректный ввод первого дня месяца!\n";
        return 1;
    }

    cout << "Введите интересующее число:\n";
    cin >> day;

    
    if (day < 1 || day > 31) {
        cout << "Некорректная дата!\n";
        return 1;
    }

    
    bool holiday = (day >= 1 && day <= 5) || (day >= 8 && day <= 10);

   
   
   
    int dayOfWeek = (firstDay + day - 1) % 7;
    if (dayOfWeek == 0) dayOfWeek = 7; 

   
    bool weekend = (dayOfWeek == 6 || dayOfWeek == 7);

    
    if (holiday || weekend) {
        cout << "Этот день выходной!\n";
    } else {
        cout << "Этот день рабочий!\n";
    }

    return 0;
}
