#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>

using namespace std;

int main() {
	SetConsoleCP(1251);        // кодировка для ввода (cin)
	SetConsoleOutputCP(1251);  // кодировка для вывода (cout)

	cout << "_____ Кукушка _____\n";

	int setTime;
	int setTextCount;
	string text = "Ку - ку";
	cout << " Введите, который час, от 0-23.\n";
	cin >> setTime;

	if (setTime < 0)
	{
		cout << " Ошибка введите положительное число от 0-23.\n";
		return 1;

	}
	setTextCount = setTime;
	if (setTime > 12 && setTime <= 23)
	{
		setTextCount = setTime % 12;

	}
	if (setTime == 0 || setTime == 24)
	{
		setTextCount = 12;
	}



	for (size_t i = 0; i < setTextCount; i++)
	{
		cout << text << "\n";
	}

	cout << " Кукушка пропела: " << text << ", " << setTextCount << " раз" << "\n";



	return 0;








}
