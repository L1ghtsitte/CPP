#include <iostream>

int main() 
{

	system("chcp 1251");

	double v = 0 ;	
	double a = 0 ;
	double t = 0 ;
	double S = 0 ;

	std::cout << "Введите значение скорости = ";
	std::cin >> v;	
	std::cout << "Введите значение ускорения = ";
	std::cin >> a;	
	std::cout << "Введите время = ";
	std::cin >> t;

	S = v * t + (a * t * t) / 2;

	std::cout << "Пройденый путь = " << S;


}
