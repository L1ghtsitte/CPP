#include <iostream>

int sum(int num1, int num2)
{
	int sum;

	sum = num1 + num2;
	std::cout << "Sum = " << sum;

	return sum;
}

int main()
{
	int first, second;

	std::cout << "Enter first number - ";
	std::cin >> first;
	std::cout << "Enter second number - ";
	std::cin >> second;

	sum(first, second);
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
