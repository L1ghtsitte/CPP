#include <iostream>

int main()
{

	system("chcp 1251");

	int hour, day, week;

	do
	{

		std::cout << "Введите количество дней = ";
		std::cin >> day;

		std::cout << std::endl;

		week = day / 7;

		day = day % 7;

		std::cout << "Введеное количество недель = " << week << std::endl;
		std::cout << "Введеное количество дней = " << day << std::endl;

		std::cout << std::endl;

		std::cout << "Перезапустить праграмму." << std::endl;

		system("pause");
		system("cls");

	}

	while ("true");

//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\

}
