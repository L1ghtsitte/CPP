#include <iostream>

int main()
{
	
		system("chcp 1251");

		int second, hour = 0, minute = 0, vibor;
		double hour2 = 0, minute2 = 0;
	do
	{
		std::cout << "Я увидел решение этой задачи немного подругому поэтому cделал cразу два варианта :\n";
		std::cout << "1. Как требовалось в задании.\n";
		std::cout << "2. Как увидел задание я.\n";

		std::cout << "Ваш выбор = ";
		std::cin >> vibor;
			

			std::cout << "Введите количество cекунд = ";
			std::cin >> second;

			system("pause");
			system("cls");

			switch (vibor)
			{

			case 1:
			{

				minute = second / 60;

				second = second % 60;

				hour = minute / 60;

				minute = minute % 60;

				std::cout << "Колчиество введеных cекунд = " << second << std::endl;
				std::cout << "Колчиество введеных минут = " << minute << std::endl;
				std::cout << "Колчиество введеных часов = " << hour << std::endl;

				std::cout << "Перезапустить программу" << std::endl;

				system("pause");
				system("cls");

				break;

			}

			case 2:
			{

				minute2 = second / 60;

				hour2 = minute2 / 60;

				std::cout << "Колчиество введеных cекунд = " << second << std::endl;
				std::cout << "Или = " << minute2 << " минут " << std::endl;
				std::cout << "Или = " << hour2 << " часов " << std::endl;

				std::cout << "Перезапустить программу" << std::endl;

				system("pause");
				system("cls");

				break;

			}

			default:
			{

				std::cout << "Выбраного варианта не дано программа перезапустится" << std::endl;

				system("pause");
				system("cls");

				break;

			}

			}

	} 

	while (vibor != 0);

//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\

}
