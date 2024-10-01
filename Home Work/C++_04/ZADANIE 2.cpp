#include <iostream>

int main() 
{

	system("chcp 1251");

	const double pi = 3.14;

	double R = 0;
	double S = 0;
	double L = 0;

	std::cout << "Длину окружности = ";
	std::cin >>	L;

	R = L / ( 2 * pi );
	S = pi * R * R;
	

	std::cout << "Площадь круга = " << S << std::endl;
	std::cout << "Радиус окружности = " << R << std::endl;

	//Выполнил L1ghtsitte//https://github.com/L1ghtsitte/CPP


}
