#include <iostream>

int main()
{
		int second, hour = 0, minute = 0, vibor;
		double hour2 = 0, minute2 = 0;
	do
	{
		std::cout << "I saw the solution to this problem a little differently, so I made two options at once :\n";
		std::cout << "1. As required in the task.\n";
		std::cout << "2. How I saw the task.\n";
		std::cout << "Your choice = ";
		std::cin >> vibor;

			std::cout << "Enter the number of seconds = ";
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
				std::cout << "Number of seconds entered = " << second << std::endl;
				std::cout << "Number of minutes entered = " << minute << std::endl;
				std::cout << "Number of hours entered = " << hour << std::endl;

				std::cout << "Restart the program" << std::endl;
				system("pause");
				system("cls");
				break;
			}

			case 2:
			{
				minute2 = second / 60;
				hour2 = minute2 / 60;
				std::cout << "Number of seconds entered = " << second << std::endl;
				std::cout << "Or = " << minute2 << " minutes " << std::endl;
				std::cout << "Or = " << hour2 << " hours " << std::endl;

				std::cout << "Restart the program" << std::endl;
				system("pause");
				system("cls");
				break;
			}

			default:
			{
				std::cout << "The selected option is not given, the program will restart" << std::endl;
				system("pause");
				system("cls");
				break;
			}
			}
	} 
	while (vibor != 0);
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
