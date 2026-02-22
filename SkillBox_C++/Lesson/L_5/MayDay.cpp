#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	
	

	int day;

	cout << "_____Майские!_____ \n";
	cout << " Введите интересующее число: ";
	cin >> day;



	  if (day < 1 || day > 31) {
      cout << "Некорректная дата!\n";
      return 1;
	  }else{
		if (day < 11 || (day > 12 && day < 15) || (day > 19 && day < 22) || (day > 26 && day < 29)) {
			cout << " Этот день выходной! ";
		}else
			{
			cout << " Этот день рабочий! ";
			}
	}

};


























