#include <iostream>

int main()
{

	system("chcp 1251");

	double R0 = 0;
	double R1 = 0;
	double R2 = 0;
	double R3 = 0;

	std::cout << "Âåäèòå çíà÷åíèå R1 = ";
	std::cin >> R1;
	std::cout << "Âåäèòå çíà÷åíèå R2 = ";
	std::cin >> R2;
	std::cout << "Âåäèòå çíà÷åíèå R3 = ";
	std::cin >> R3;

	R0 = 1 / R1 + 1 / R2 + 1 / R3;

	R0 = 1 / R0;

	std::cout << "Çíà÷åíèå R0 = " << R0;

	//Выполнил L1ghtsitte//https://github.com/L1ghtsitte/CPP
}
