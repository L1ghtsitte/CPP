#include <iostream>

int main()
{
	double money, procent, procent_mon, mounth, free, free2, sum;

	do
	{
		std::cout << " Contribution = ";
		std::cin >> money;
		std::cout << " Percent = ";
		std::cin >> procent;
		std::cout << "Number of months = ";
		std::cin >> mounth;
		procent_mon = procent / 12;
		free = money * (procent_mon / 100);
		free2 = free * mounth;
		sum = money + (free * mounth);
		std::cout << " Your deposit amount = " << sum << std::endl;
		std::cout << " Paid out every month " << free << " eur " << std::endl;
		std::cout << " For " << mounth << " months accumulated " << free2 << " euro " << std::endl;
	}
	while ("true");
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
