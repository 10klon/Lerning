#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
    SetConsoleCP(1251);        // кодировка для ввода (cin)
    SetConsoleOutputCP(1251);  // кодировка для вывода (cout)

    int totalClients;   // Общее число клиентов (мужчин) в городе
    int barbersCount;  // Число нанятых барберов
    cout << "_____Калькулятор барберов_____ \n";
    
    cout << "Введите общее число мужчин в городе: ";
    cin >> totalClients;

    cout << "Введите число работающих барберов: ";
    cin >> barbersCount;

    
    int clientsPerDayPerBarber = 8;  // 8 клиентов за 8-часовую смену
    int workDaysPerMonth = 30;          // 30 рабочих дней
    int monthlyCapacityPerBarber = clientsPerDayPerBarber * workDaysPerMonth;  // 240

    // Сколько всего клиентов могут обслужить все барберы за месяц
    int totalMonthlyCapacity = barbersCount * monthlyCapacityPerBarber;

    // Сколько барберов требуется минимум (с учётом остатка)
    int requiredBarbers = totalClients / monthlyCapacityPerBarber;
    if (totalClients % monthlyCapacityPerBarber != 0) {
        requiredBarbers = requiredBarbers + 1;  // Если есть остаток — нужен ещё один барбер
    }

   
    cout << "\n--- Расчёт ---\n";
    cout << "Один барбер обслуживает за месяц: " << monthlyCapacityPerBarber << " клиентов\n";
    cout << "Все барберы могут обслужить за месяц: " << totalMonthlyCapacity << " клиентов\n";
    cout << "Требуется минимум барберов: " << requiredBarbers << "\n";

    
    if (barbersCount < requiredBarbers) {
        int shortage = requiredBarbers - barbersCount;
        cout << "НЕ ХВАТАЕТ барберов! Необходимо нанять ещё " << shortage << ".\n";
    }
    else if (barbersCount == requiredBarbers) {
        cout << "Барберов ровно столько, сколько нужно.\n";
    }
    else {
        cout << "Барберов хватает.\n";
        if (barbersCount >= 2 * requiredBarbers) {
            cout << "ВНИМАНИЕ: барберов в 2 раза больше, чем необходимо! \n";
        }
    }

    return 0;
};


























