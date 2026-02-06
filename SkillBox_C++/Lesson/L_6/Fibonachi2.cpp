#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>

using namespace std;

int main() {
	SetConsoleCP(1251);        // кодировка для ввода (cin)
	SetConsoleOutputCP(1251);  // кодировка для вывода (cout)

	cout << "_____ Введите номер последовательности ~Фибоначи~  _____\n";

	int first = 1;
	int second = 1;
	int n;








	if (!(cin >> n))
	{
		cout << " Ошибка введите число! \n";
		return  1;


	}
	else if (n <= 0)
	{
		cout << " Ошибка введите положительное число! \n";

		return 1;
	}
	else
	{
		for (int counter = 3; counter <= n; ++counter) {
			int next = first + second;
			first = second;
			second = next;
		}
		cout << "Число в последовательности: " << second << "\n";
		return 0;

	}












}
