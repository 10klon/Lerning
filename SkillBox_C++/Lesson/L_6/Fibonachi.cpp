#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>

using namespace std;

int main() {
	SetConsoleCP(1251);        // кодировка для ввода (cin)
	SetConsoleOutputCP(1251);  // кодировка для вывода (cout)

	cout << "_____ Введите номер последовательности ~Фибоначи~  _____\n";
	int a = 1;
	int b = 1;
	int c;
	int d;


	int x;
	int counter = 2;

	bool search = false;
	while (true)
	{



		cin >> x;

		if (x > 46)
		{
			cout << " Переполнение int!";
			return 1;
		}

		if (x == 1 || x == 2)
		{
			cout << " Число в  последовательности: " << 1;
			return 0;
		}


		while (true)
		{




			if (!search)
			{
				++counter;
				c = a + b;

			}
			search = counter == x;
			if (search)
			{

				cout << " Число в  последовательности: " << c;
				return 0;
			}


			if (!search)
			{

				++counter;
				d = a + c;


			}
			search = counter == x;
			if (search)
			{
				cout << " Число в  последовательности: " << d;
				return 0;
			}

			if (!search)
			{

				++counter;
				a = c + d;


			}
			search = counter == x;
			if (search)
			{
				cout << " Число в  последовательности: " << a;
				return 0;
			}


			b = d;









		}
	}



}
