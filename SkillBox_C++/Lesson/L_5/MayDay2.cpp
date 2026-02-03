#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
	SetConsoleCP(1251);        // кодировка для ввода (cin)
	SetConsoleOutputCP(1251);  // кодировка для вывода (cout)

	cout << "_____Майские!_____ \n";
	int day;
	int firstDay;

	int length = 100;

	int a, b;
	for (size_t i = 0; i < length; i++)
	{
		int sunday = 1;
		int saturday = 1;
		bool weekend = false;
		bool holiday = false;


		cout << " Введите первый день месяца(1-7): \n";
		cin >> firstDay;
		cout << " Введите интересующее число: \n";
		cin >> day;
		if (day < 0 || day > 31 || day == 0)
		{
			cout << " некорректная дата \n";
		}

		holiday = (day >= 1 && day <= 5) || (day >= 8 && day <= 10);

		if (holiday == false) {



			switch (firstDay)
			{
			case  1:
				a = -1;
				b = -2;
				break;
			case 2:
				a = -3;
				b = -4;
				break;
			case 3:
				a = -5;
				b = -6;
				break;
			case 4:
				a = -7;
				b = -8;
				break;
			case 5:
				a = -9;
				b = -10;
				break;
			case 6:
				a = -11;
				b = -12;
				break;
			case 7:
				a = -13;
				b = -14;
				break;

			}
			sunday = sunday + ((firstDay + 6) % 7) + 7 + a;
			saturday = saturday + ((firstDay + 6) % 7) + 7 + b;



			for (int i = 0; i < 4; i++)
			{


				while (day == saturday || day == sunday)
				{
					weekend = true;

					break;

				}
				sunday += +7;
				saturday += +7;



			}



		}
		if (weekend || holiday) {
			cout << " Этот день выходной! \n ";
		}
		else
		{
			cout << " Этот день рабочий! \n ";
		}











	}










};


























