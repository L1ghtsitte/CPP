#include <iostream>

int main()
{
	double num1;
	double num2;
	double mod1;
	double mod2;
	double modsum;

	std::cout << "First number = ";
	std::cin >> num1;
	std::cout << "Second number = ";
	std::cin >> num2;
	if (num1 < 0)
	{
		std::cout << "Module 1 of number = ";
		mod1 = num1 * -1;
		std::cout << mod1;
		std::cout << "\n";
	}
	else
	{
		std::cout << "Module 1 of number = ";
		mod1 = num1;
		std::cout << mod1;
		std::cout << "\n";
	}
	if (num2 < 0)
	{
		std::cout << "Module 2 of number = ";
		mod2 = num2 * -1;
		std::cout << mod2;
		std::cout << "\n";
	}
	else
	{
		std::cout << "Module 2 of number = ";
		mod2 = num2;
		std::cout << mod2;
		std::cout << "\n";
	}
	std::cout << "Sum of models = " << mod1 + mod2 << std::endl;
	modsum = num1 + num2;
	if (modsum < 0)
	{
		modsum = modsum * (-1);
	}
	else
	{
		modsum = modsum;
	}
	std::cout << "Module of sum = " << modsum << std::endl;
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\