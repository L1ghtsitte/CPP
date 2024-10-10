#include <iostream>

int main()
{

	system("chcp 1251");

	int hour, day, week;

	do
	{

		std::cout << "¬ведите количество дней = ";
		std::cin >> day;

		std::cout << std::endl;

		week = day / 7;

		day = day % 7;

		std::cout << "¬веденое количество недель = " << week << std::endl;
		std::cout << "¬веденое количество дней = " << day << std::endl;

		std::cout << std::endl;

		std::cout << "ѕерезапустить праграмму." << std::endl;

		system("pause");
		system("cls");

	}

	while ("true");

}