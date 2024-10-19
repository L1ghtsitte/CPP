#include <iostream>

int main() 
{
	double v = 0 ;	
	double a = 0 ;
	double t = 0 ;
	double S = 0 ;

	std::cout << "Enter speed value = ";
	std::cin >> v;	
	std::cout << "Enter acceleration value = ";
	std::cin >> a;	
	std::cout << "Enter time = ";
	std::cin >> t;

	S = v * t + (a * t * t) / 2;

	std::cout << "Distance traveled = " << S;
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
