#include <iostream>

int main()
{

	system ("chcp 1251");

	float x;
	float t;
	float g;
	//double k;

	std::cout << "Певрое число = ";
	std::cin >> x;
	std::cout << "Второе число = ";
	std::cin >> t;
	std::cout << "Певрое число = ";
	std::cin >> g;


	float k = (x/2 + 3*t - 2*g) - t*t ;

	std::cout << "Результат = " << k;



	return 0;



}
