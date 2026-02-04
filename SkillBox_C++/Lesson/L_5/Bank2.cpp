#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
	SetConsoleCP(1251);        // кодировка для ввода (cin)
	SetConsoleOutputCP(1251);  // кодировка для вывода (cout)

	cout << "_____Банкомат_____ \n";

	int cash;

	int a = 100;
	int b = 200;
	int c = 500;
	int d = 1000;
	int f = 2000;
	int e = 5000;

	cout << "Введите какую сумму хотите получить?  \n";
	cin >> cash;

	if (cash == 0) {
		cout << "Вы запросили нулевую сумму. Операция завершена.\n";
		return 0;
	}
	if (cash > 150000)
	{
		cout << " Сумма слишком большая! \n";
		return 0;
	}
	if (cash % 100 == 0)
	{
		e = cash / 5000;
		if (e != 0) {



			cout << " Выдаю по 5000: " << e << "\n";

		}
		int cash_2000 = cash % 5000;
		f = cash_2000 / 2000;
		if (f != 0)
		{


			cout << " Выдаю по 2000: " << f << "\n";

		}
		int cash_1000 = cash % 5000;
		cash_1000 = cash_1000 % 2000;
		d = cash_1000 / 1000;
		if (d != 0)
		{


			cout << " Выдаю по 1000: " << d << "\n";
		}
		int cash_500 = cash % 1000;
		c = cash_500 / 500;

		if (c != 0)
		{


			cout << " Выдаю по 500: " << c << "\n";
		}
		int cash_200 = cash % 500;
		b = cash_200 / 200;
		if (b != 0)
		{


			cout << " Выдаю по 200: " << b << "\n";

		}
		int cash_100 = cash % 500;
		cash_100 = cash_100 % 200;
		a = cash_100 / 100;

		if (a != 0)
		{


			cout << " Выдаю по 100: " << a << "\n";
		}

	}
	else {
		cout << " Невозможно выдать такую сумму \n";

	}





















};


























