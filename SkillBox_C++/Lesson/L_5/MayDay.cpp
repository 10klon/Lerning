#include <iostream>
#include <Windows.h>
#include <consoleapi2.h>
#include <cstdlib>
using namespace std;

int main() {
	SetConsoleCP(1251);        // кодировка для ввода (cin)
	SetConsoleOutputCP(1251);  // кодировка для вывода (cout)

	cout << "_____Майские!_____ \n";


	cout << " Введите интересующее число: ";
	cin >> day;



	if (day < 0 || day > 31 || day == 0)
	{
		cout << " некорректная дата \n";
	}




	if (day < 11 || (day > 12 && day < 15) || (day > 19 && day < 22) || (day > 26 && day < 29)) {


		cout << " Этот день выходной! ";

	}
	else
	{
		cout << " Этот день рабочий! ";

	}








};


























