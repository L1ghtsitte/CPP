#include <iostream>

int main()
{



	system("chcp 1251");

	int cent, dolor;
	double money; 

	do
	{

		std::cout << "Cколько у вас денег = ";
		std::cin >> money;

		dolor = money;

		cent = (money - dolor) * 100;

		std::cout << dolor << " долларов и " << cent << " центов. ";

		system("pause");
		system("cls");

		}

	while ("true");
	
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
}
