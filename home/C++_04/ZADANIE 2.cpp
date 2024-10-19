#include <iostream>

int main() 
{
	const double pi = 3.14;
	double R = 0;
	double S = 0;
	double L = 0;

	std::cout << "Circumference = ";
	std::cin >>	L;

	R = L / ( 2 * pi );
	S = pi * R * R;
	
	std::cout << "Area of ​​a circle = " << S << std::endl;
	std::cout << "Circle radius = " << R << std::endl;
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
