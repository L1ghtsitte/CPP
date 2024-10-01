#include <iostream>

int main()
{
	system("chcp 1251");

	int num1;
	int num2;

	std::cout << "Введите первое число: ";
	std::cin >> num1;
	std::cout << "Введите второе число: ";
	std::cin >> num2;


	std::cout << "Разница: " << num1 - num2 << "\n";
	std::cout << "Сумма: " << num1 + num2 << "\n";
	std::cout << "Произведение: " << num1 * num2 << "\n";

	//Выполнил L1ghtsitte//https://github.com/L1ghtsitte/CPP
}
