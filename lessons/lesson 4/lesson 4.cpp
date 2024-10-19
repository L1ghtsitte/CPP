#include <iostream>

int main()
{

	system("chcp 1251");

	int num1, num2, sum, action;

	std::cout << "Введите первое число = ";
	std::cin >> num1;
	std::cout << "Введите второе число = ";
	std::cin >> num2;
	std::cout << "Введите действие = ";
	std::cin >> action;

	switch (action)
	{
	case 0:
	{
		std::cout << "Сложение: " << num1 + num2;
		break;
	}
	case 1:
	{
		std::cout << "Умножение: " << num1 * num2;
		break;
	}
	default:
	{
		std::cout << "Ошибка ";
	}
	}

	if (action == 2)
	{
		std::cout << "Сложение(if): " << num1 + num2;
	}
	
	if (action == 3)
	{
		std::cout << "Умножение (if): " << num1 * num2;
	}
}

//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
