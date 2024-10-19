#include <iostream>

int main()
{
	int hour, day, week;

	do
	{
		std::cout << "Enter number of days = ";
		std::cin >> day;
		std::cout << std::endl;
		week = day / 7;
		day = day % 7;
		std::cout << "Entered number of weeks = " << week << std::endl;
		std::cout << "Entered number of days = " << day << std::endl;
		std::cout << std::endl;
		std::cout << "Restart the program." << std::endl;
		system("pause");
		system("cls");
	}
	while ("true");
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
