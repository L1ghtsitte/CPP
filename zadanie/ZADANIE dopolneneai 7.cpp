#include <iostream>

double modul(double x)
{

	if (x < 0)
	{
		x = x * (-1);
	}
	else
	{
		x = x * 1;
	}

	return x;

}

int main()
{

	system("chcp 1251");

	double num1;
	double num2;
	double mod1;
	double mod2;
	double modsum;


	std::cout << "First number = ";
	std::cin >> num1;
	std::cout << "Second number = ";
	std::cin >> num2;
	std::cout << "Modulus of the first number = " << modul(num1) << std::endl;
	std::cout << "Modulus of the second number = " << modul(num2) << std::endl;
	mod1 = modul(num1);
	mod2 = modul(num2);
	std::cout << "Sum of models = " << mod1 + mod2 << std::endl;
	modsum = num1 + num2;
	std::cout << "Sum modulus = " << modul(modsum) << std::endl;
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\