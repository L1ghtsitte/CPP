#include <iostream>

int main()
{

	system("chcp 1251");

	double num1 = 0;
	double sum = 0;
	int count = 0;

	while (num1 >= 0)
	{

	std::cin >> num1;

	sum = sum + num1;

		if (num1 >= 0)
		{
			count += 1;
		}

	}

	std::cout << "sum" << sum + num1 * (-1) << std::endl;

	std::cout << "kol-vo" << count << std::endl;

	//Выполнил L1ghtsitte//https://github.com/L1ghtsitte/CPP


}
