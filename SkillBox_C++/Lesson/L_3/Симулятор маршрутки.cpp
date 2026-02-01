#include <iostream>

int main() {

		//Остановки
		std::string busStop1 = "«Улица програмистов»\n";
		std::string busStop2 = "«Проспект алгоритмов»\n";
		std::string busStop3= "«Улица знаний»\n";
		std::string busStopLast = "«Проспект практтики»\n";
		
		int inPassenger = 0;
		int outPassenger = 0;
        int currentPassenger;
		int ticketPrse = 20;
		int totalMoney = 0;
	    int totalPassenger;
		
		std::cout << "Симулятор маршрутки\n";


		std::cout << "Прибываем на остановку " << busStop1 << "В салоне пассажиров : " << inPassenger << "\n";
		std::cout << "Сколько пассажиров вышло на остановке? " << outPassenger << "\n";
		std::cout << "Введите cколько пассажиров зашло на остановке? " ;
		std::cin >> inPassenger ;
		currentPassenger = inPassenger;
		totalPassenger = inPassenger;
		std::cout << "Отправляемся с остановки " << busStop1 << "В салоне пассажиров: " << currentPassenger << "\n";


		std::cout << "-----------Едем---------\n";
		std::cout << "Прибываем на остановку " << busStop2 << "В салоне пассажиров : " << currentPassenger << "\n";
		std::cout << "Введите cколько пассажиров вышло на остановке? ";
		std::cin >> outPassenger;
		currentPassenger = currentPassenger - outPassenger;
		std::cout << "Введите cколько пассажиров зашло на остановке? ";
		std::cin >> inPassenger;
		currentPassenger += inPassenger;
		totalPassenger += inPassenger;
		std::cout << "Отправляемся с остановки " << busStop2 << "В салоне пассажиров: " << currentPassenger << "\n";


		std::cout << "-----------Едем---------\n";
		std::cout << "Прибываем на остановку " << busStop3 << "В салоне пассажиров : " << currentPassenger << "\n";
		std::cout << "Введите cколько пассажиров вышло на остановке? ";
		std::cin >> outPassenger;
		currentPassenger = currentPassenger - outPassenger;
		std::cout << "Введите cколько пассажиров зашло на остановке? ";
		std::cin >> inPassenger;
		currentPassenger += inPassenger;
		totalPassenger += inPassenger;
		std::cout << "Отправляемся с остановки " << busStop3 << "В салоне пассажиров: " << currentPassenger << "\n";

		//Конечная
		std::cout << "-----------Едем---------\n";
		std::cout << "Прибываем на остановку " << busStopLast << "В салоне пассажиров : " << currentPassenger << "\n";
		std::cout << "Cколько пассажиров вышло на остановке? " << currentPassenger << "\n";

	    //Расчет итогов поездки
		totalMoney = totalPassenger * ticketPrse;
		int fuel = totalMoney / 5;
		int taxes = totalMoney / 5;
		int labourPayment = totalMoney / 4;
		int carRepair = totalMoney / 5;
		int profit = totalMoney - fuel - taxes - labourPayment - carRepair;
		std::cout << "----------Итоговый подсчет---------\n";
		std::cout << "Всего заработали: " << totalMoney << "\n";
		std::cout << "Зарплата водителя: " << labourPayment << "\n";
		std::cout << "Расходы на топливо: " << fuel << "\n";
		std::cout << "Налоги:" << taxes << "\n";
		std::cout << "Расходы на ремонт машины: " << carRepair << "\n";
		std::cout << "Итого доход: " << profit << "\n";
		
		 std::cout << "Нажмите Enter для продолжения ... ";

		std::cin.get();
};