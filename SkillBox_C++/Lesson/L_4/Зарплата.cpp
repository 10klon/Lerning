#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
    SetConsoleCP(1251);        // кодировка для ввода (cin)
    SetConsoleOutputCP(1251);  // кодировка для вывода (cout)
    int salary1, salary2, salary3;

    cout << "_____Зарплата_____ \n ";


    // Ввод зарплат трёх сотрудников
    cout << "Введите зарплату первого сотрудника: \n";
    cin >> salary1;
    cout << "Введите зарплату второго сотрудника: \n";
    cin >> salary2;
    cout << "Введите зарплату третьего сотрудника: \n";
    cin >> salary3;

    cout << "-----Считаем-----" << "\n";

    // Находим максимальную зарплату
    int maxSalary = salary1;
    if (salary2 > maxSalary) {
        maxSalary = salary2;
    }
    if (salary3 > maxSalary) {
        maxSalary = salary3;
    }

    // Находим минимальную зарплату
    int minSalary = salary1;
    if (salary2 < minSalary) {
        minSalary = salary2;
    }
    if (salary3 < minSalary) {
        minSalary = salary3;
    }

    // Вычисляем разницу между максимальной и минимальной зарплатой
    int dif = maxSalary - minSalary;

    // Вычисляем среднюю зарплату
    int avgSalary = (salary1 + salary2 + salary3) / 3;

    // Вывод результатов
    cout << "Самая высокая зарплата в отделе: " << maxSalary << " рублей" << "\n";
    cout << "Разница между самой высокой и самой низкой зарплатой в отделе: "
        << diff << " рублей" << "\n";
    cout << "Средняя зарплата в отделе: " <<  avgSalary << " рублей" << "\n";

};







            


	




























            


	




















