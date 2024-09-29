#include <iostream>

int main() 
{

	system("chcp 1251");

	const double pi = 3.14;

	double R = 0;
	double S = 0;
	double L = 0;

	std::cout << "Ведите Радиус = ";
	std::cin >>	R;

	S = pi * R * R;
	L = 2 * pi * R;

	std::cout << "Площадь круга = " << S << std::endl;
	std::cout << "Длинна окружности = " << L << std::endl;


}