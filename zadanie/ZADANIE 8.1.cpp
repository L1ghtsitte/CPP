#include <iostream>

int main()
{

	system("chcp 1251");

	int num2 = 0;

	std::cin >> num2;

	for (int i = 1; i <= num2; ++i)
	{

		std::cout << i  << ".Hello underworld!" << std::endl;

	}
}