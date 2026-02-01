#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
    SetConsoleCP(1251);        // кодировка для ввода (cin)
    SetConsoleOutputCP(1251);  // кодировка для вывода (cout)
    int day;
    string dayName;

    // Ввод дня недели
    cout << "Введите день недели (от 1 до 7): ";
    if (!(cin >> day) {

     cout << "Введите число! \n"
         for (size_t i = 0; i < length; i++)
         {

         }
    // Проверка корректности ввода день и не меньше 1 и не больше 7
      if (day < 1 || day > 7) {
        cout << "Ошибка: введите число от 1 до 7!" << endl;
        return 1;
      }
    }
    cout << "Меню сегодня (" << day << "\n";

    // Вывод меню по дням недели
    if(day = 1) {
        dayName = "Понедельник";
        cout << "Борщ\n";
        cout << "Салат «Греческий»\n";
        cout << "Говядина с овощами\n";
        cout << "Компот\n";
        break;
    case 2: // Вторник
        cout << "Харчо\n";
        cout << "Салат «Оливье»\n";
        cout << "Баварские колбаски с капустой\n";
        cout << "Морс\n";
        break;
    case 3: // Среда
        cout << "Солянка\n";
        cout << "Салат «Витаминный»\n";
        cout << "Рыба под маринадом\n";
        cout << "Чай\n";
        break;
    case 4: // Четверг
        cout << "Гороховый суп\n";
        cout << "Салат «Цезарь» с креветками\n";
        cout << "Куриная ножка с пюре\n";
        cout << "Морс\n";
        break;
    case 5: // Пятница
        cout << "Уха\n";
        cout << "Салат «Мимоза»\n";
        cout << "Стейк из свинины\n";
        cout << "Компот\n";
        break;
    case 6: // Суббота
        cout << "Рассольник\n";
        cout << "Салат «Цезарь» с курицей\n";
        cout << "Запечённая рыба с картофелем\n";
        cout << "Чай\n";
        break;
    case 7: // Воскресенье
        cout << "Щи\n";
        cout << "Салат «Летний»\n";
        cout << "Жаркое по‑домашнему\n";
        cout << "Морс\n";
        break;
    }

    return 0;
}
            

        
       
        std::cout << "Нажмите Enter для продолжения ... ";
        std::cin.get();
        std::cin.get();
    


       
};
	




















