#include <iostream>

int main()
{
	int cent, dolor;
	double money; 

	do
	{
		std::cout << "How much money do you have = ";
		std::cin >> money;
		dolor = money;
		cent = (money - dolor) * 100;
		std::cout << dolor << " dollars and " << cent << " cents. ";
		system("pause");
		system("cls");
	}
	while ("true");	
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
