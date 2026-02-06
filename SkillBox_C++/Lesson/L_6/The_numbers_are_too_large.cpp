#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>

using namespace std;

int main() {
	SetConsoleCP(1251);        // кодировка для ввода (cin)
	SetConsoleOutputCP(1251);  // кодировка для вывода (cout)

	cout << "_____ Слишком большие числа _____\n";

	int num;

	int numCount = 0;

	cout << " Введите число я посчитаю сколько в нем знаков.\n";

	if (!(cin >> num))
	{
		cout << " Ошибка: введите число.\n";
		return 1;
	}
	int numOriginal = num;
	if (num < 0)
	{
		num = -num;
	}
	if (num == 0) {
		numCount = 1;
	}
	else {
		while (num != 0) {
			num /= 10;
			++numCount;
		}
	}


	cout << "В числе: " << numOriginal << " - " << numCount << " цифр(ы).\n";




}
