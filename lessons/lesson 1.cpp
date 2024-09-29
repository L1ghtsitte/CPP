#include <iostream>


int main()
{

	system("chcp 1251");
	int num = 8;

	std::cout << "Введите число: ";

	std::cin >> num;

	std::cout << "Вы написали число: " << num << std::endl;

	return 0;
}
