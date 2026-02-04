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
	int cashTotal;
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

		if (cash >= 5000 && cash % 5000 == 0) {

			e = cash / 5000;
			cout << " Выдаю по 5000: " << e << "\n";
		}
		else
		{
			e = cash / 5000;
			cashTotal = cash % 5000;
			cout << " Выдаю по 5000: " << e << "\n";
			if (cashTotal >= 2000 && cashTotal % 2000 == 0)
			{
				f = cashTotal / 2000;
				cout << " Выдаю по 2000: " << f << "\n";
			}
			else
			{

				f = cashTotal / 2000;
				cashTotal = cashTotal % 2000;
				cout << " Выдаю по 2000: " << f << "\n";

				if (cashTotal >= 1000 && cashTotal % 1000 == 0)
				{
					d = cashTotal / 1000;
					cout << " Выдаю по 1000: " << d << "\n";
				}
				else
				{

					d = cashTotal / 1000;
					cashTotal = cashTotal % 1000;
					cout << " Выдаю по 1000: " << d << "\n";
					if (cashTotal >= 500 && cashTotal % 500 == 0)
					{
						c = cashTotal / 500;
						cout << " Выдаю по 500: " << c << "\n";
					}
					else {
						c = cashTotal / 500;
						cashTotal = cashTotal % 500;
						cout << " Выдаю по 500: " << c << "\n";
						if (cashTotal >= 200 && cashTotal % 200 == 0)
						{
							b = cashTotal / 200;
							cout << " Выдаю по 200: " << b << "\n";
						}
						else {
							b = cashTotal / 200;
							cashTotal = cashTotal % 200;
							cout << " Выдаю по 200: " << b << "\n";

							if (cashTotal >= 100 && cashTotal % 100 == 0)
							{
								a = cashTotal / 100;
								cout << " Выдаю по 100: " << a << "\n";
							}
							else {
								a = cashTotal / 100;
								cashTotal = cashTotal % 100;
								cout << " Выдаю по 100: " << a << "\n";

							}

						}

					}
				}

			}


		}

	}
	else {
		cout << " Невозможно выдать такую сумму \n";

	}










};


























