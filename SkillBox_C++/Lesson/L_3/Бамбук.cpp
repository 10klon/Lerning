#include <iostream>

int main() {
   int dailyGrowth = 50; // ежедневный рост;
		int nightFade = 20;  //размер съедаемого гусеницами бамбука за одну ночь;
		int beginHeight = 100; //начальная высота бамбука.
		int days;
		int totalHeight;

		std::cout << "Калькулятор роста бамбука. \n";
		
		std::cout << "Введите количество дней: ";
		std::cin >> days;
		totalHeight = beginHeight + (dailyGrowth - nightFade) * days + dailyGrowth / days;
		std::cout << "За это время бамбук вырастет на:  " << totalHeight << " см\n";
		
		 std::cout << "Нажмите Enter для продолжения ... ";

		std::cin.get();
};