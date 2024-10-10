#include <iostream>

int main()
{

	system("chcp 1251");

	double money, procent, procent_mon, mounth, free, free2, sum;

	do
	{

		std::cout << " Вклад = ";
		std::cin >> money;

		std::cout << " Процент = ";
		std::cin >> procent;

		std::cout << " Количество месецев = ";
		std::cin >> mounth;

		procent_mon = procent / 12;

		free = money * (procent_mon / 100);

		free2 = free * mounth;

		sum = money + (free * mounth);

		std::cout << " Ваша сумма на вкладе = " << sum << std::endl;
		std::cout << " Каждый месец выплачиволось по " << free << " евпр " << std::endl;
		std::cout << " За " << mounth << " месецев накапало " << free2 << " евро " << std::endl;

		system("pause");
		system("cls");

	}

	while ("true");

}