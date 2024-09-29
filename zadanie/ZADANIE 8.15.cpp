#include <iostream>

int main()
{

	system("chcp 1251");

	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int sum = 0;

	std::cin >> num1;
	std::cin >> num2;
	std::cin >> num3;
	std::cin >> num4;

	std::cout << "sum - " << sum << std::endl;

	sum = sum + num1;
	std::cout << "sum - " << sum << std::endl;

	sum = sum + num2;
	std::cout << "sum - " << sum << std::endl;

	sum = sum + num3;
	std::cout << "sum - " << sum << std::endl;

	sum = sum + num4;
	std::cout << "sum - " << sum << std::endl;

}