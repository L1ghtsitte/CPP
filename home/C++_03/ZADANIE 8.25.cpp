#include <iostream>

int main()
{
	double num1, num2, num3, num4, i;

	std::cout << "First" << std::endl;
	for (i = 0; i <= 10; ++i)
	{
		std::cout << i <<std::endl;
	}
	std::cout << "Second" << std::endl;
	for (i = -10; i <= 10; ++i)
	{
		std::cout << i << std::endl;
	}
	std::cout << "Third" << std::endl;
	for (i = -25; i <= 15; ++i)
	{
		std::cout << i << std::endl;
	}
	std::cout << "Fourth" << std::endl;
	for (i = 0; i <= 100; i = i + 15)
	{
		std::cout << i << std::endl;
	}
	std::cout << "Fifth" << std::endl;
	std::cin >> num1;
	for (i = 0; i <= num1; ++i)
	{
		std::cout << i << std::endl;
	}
	std::cout << "Sixth" << std::endl;
	std::cin >> num2;
	for (i = num2; i <= 100; ++i)
	{
		std::cout << i << std::endl;
	}
	std::cout << "Seventh" << std::endl;
	std::cin >> num3;
	std::cin >> num4;
	for (i = num3; i <= num4; ++i)
	{
		std::cout << i << std::endl;
	}
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
