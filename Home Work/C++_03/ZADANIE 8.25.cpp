#include <iostream>

int main()
{

	system("chcp 1251");

	double num1;
	double num2;
	double num3;
	double num4;
	double i;


	std::cout << "Первое" << std::endl;
	for (i = 0; i <= 10; ++i)
	{

		std::cout << i <<std::endl;

	}

	std::cout << "Второе" << std::endl;

	for (i = -10; i <= 10; ++i)
	{

		std::cout << i << std::endl;

	}

	std::cout << "Третье" << std::endl;

	for (i = -25; i <= 15; ++i)
	{

		std::cout << i << std::endl;

	}

	std::cout << "Четвертое" << std::endl;

	for (i = 0; i <= 100; i = i + 15)
	{

		std::cout << i << std::endl;

	}

	std::cout << "Пятое" << std::endl;

	std::cin >> num1;

	for (i = 0; i <= num1; ++i)
	{

		std::cout << i << std::endl;

	}

	std::cout << "Шестое" << std::endl;

	std::cin >> num2;

	for (i = num2; i <= 100; ++i)
	{

		std::cout << i << std::endl;

	}

	std::cout << "Седьмое" << std::endl;

	std::cin >> num3;
	std::cin >> num4;

	for (i = num3; i <= num4; ++i)
	{

		std::cout << i << std::endl;

	}

	//Выполнил L1ghtsitte//https://github.com/L1ghtsitte/CPP
}
