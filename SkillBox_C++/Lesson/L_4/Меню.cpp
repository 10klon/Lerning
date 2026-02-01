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

	std::cout << "____Меню____ \n";

	// Ввод дня недели 
	std::cout << "Введите день недели (от 1 до 7): ";
	//Проверка на число
	if (!(cin >> day)) {
		std::cout << "Введите число! \n";

	}
	else {
		// Проверка корректности ввода день и не меньше 1 и не больше 7
		if (day < 1 || day > 7) {
			std::cout << "Ошибка: введите число от 1 до 7!" << endl;

		}
	}

	//Опеределяем день

	if (day == 1) {
		dayName = "Понедельник";
	}
	else if (day == 2) {
		dayName = "Вторник";
	}
	else if (day == 3) {
		dayName = "Среда";
	}
	else if (day == 4) {
		dayName = "Четверг";
	}
	else if (day == 5) {
		dayName = "Пятница";
	}
	else if (day == 6) {
		dayName = "Суббота";
	}
	else if (day == 7) {
		dayName = "Воскресенье";
	}




	//Сообщаем какой день недели
	std::cout << "Меню сегодня : " << dayName << "\n";

	// Вывод меню по дням недели
	switch (day) {
	case  1:
		cout << "Борщ\n";
		cout << "Салат «Греческий»\n";
		cout << "Говядина с овощами\n";
		cout << "Компот\n";
		break;


	case 2:

		cout << "Харчо\n";
		cout << "Салат «Оливье»\n";
		cout << "Баварские колбаски с капустой\n";
		cout << "Морс\n";
		break;
	case 3:

		cout << "Солянка\n";
		cout << "Салат «Витаминный»\n";
		cout << "Рыба под маринадом\n";
		cout << "Чай\n";
		break;
	case 4:

		cout << "Гороховый суп\n";
		cout << "Салат «Цезарь» с креветками\n";
		cout << "Куриная ножка с пюре\n";
		cout << "Морс\n";

		break;
	case 5:

		cout << "Уха\n";
		cout << "Салат «Мимоза»\n";
		cout << "Стейк из свинины\n";
		cout << "Компот\n";
		break;
	case 6:

		cout << "Рассольник\n";
		cout << "Салат «Цезарь» с курицей\n";
		cout << "Запечённая рыба с картофелем\n";
		cout << "Чай\n";
		break;
	case 7:
		cout << "Щи\n";
		cout << "Салат «Летний»\n";
		cout << "Жаркое по-домашнему\n";
		cout << "Морс\n";

		break;

	}
	std::cout << "Нажмите Enter для выхода ... ";
	std::cin.get();
	std::cin.get();




};































































