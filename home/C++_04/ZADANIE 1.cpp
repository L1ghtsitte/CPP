#include <iostream>

int main()
{
	double R0 = 0;
	double R1 = 0;
	double R2 = 0;
	double R3 = 0;

	std::cout << "Enter R1 value = ";
	std::cin >> R1;
	std::cout << "Enter R2 value = ";
	std::cin >> R2;
	std::cout << "Enter R3 value = ";
	std::cin >> R3;

	R0 = 1 / R1 + 1 / R2 + 1 / R3;
	R0 = 1 / R0;
	std::cout << "R0 value = " << R0;
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
