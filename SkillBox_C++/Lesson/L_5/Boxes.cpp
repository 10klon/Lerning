#include <iostream>


#include <cstdlib>
using namespace std;

int main() {
	
	
	int a, b, c, m, n, k;
		


		cout << "_____Boxes_____ \n";
		cout << " Введите Ш.В.Г первой коробки\n";

		if (!(cin >> a >> b >> c))
		{
			cout << " Error \n";
			return 1;
		}
		if (a <= 0 || b <= 0 || c <= 0)
		{
			cout << " Error \n";
			return 1;
		}
		cout << " Введите Ш.В.Г второй коробки \n";

		if (!(cin >> m >> n >> k))
		{
			cout << " Error \n";
			return 1;
		}
		if (m <= 0 || n <= 0 || k <= 0)
		{
			cout << " Error \n";
			return 1;
		}

		cout << " Проверяем поместится ли. \n";




		if ((a >= m && b >= n && c >= k )|| (a >= m && b >= k && c >= n )|| (a >= k && b >= m && c >= n )||( a >= k && b >= n && c >= m) || ( a >= n && b >= k && c >= m )|| (a >= n && b >= m && c >= k)) {

			cout << " Поместится \n";
			return 0;

		}



		else
		{
			cout << " Не поместится \n";
			return 0;
		}




	



};


























