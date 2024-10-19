#include <iostream>

int main()
{
	system("chcp 1251");

	int a;
	int b;

	std::cout << "Введите первое число: ";
	std::cin >> a;
	std::cout << "Введите второе число: ";
	std::cin >> b;


	std::cout << "Разница: " << a - b << "\n";
	std::cout << "Сумма: " << a + b << "\n";
	std::cout << "Произведение: " << a * b << "\n";

	std::cout << "Выполнил студент: Стеценко Никита 23/РПО6\n";
}
