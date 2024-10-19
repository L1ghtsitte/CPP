#include <iostream>

int main()
{

	int num;

	while (true)
	{

		for (int i = 0; i < 10; i++)
		{
			std::cout << i << ". Hello world!" << std::endl;
		}

		std::cin >> num;

		if (num < 0)
		{
			std::cout << "negativ" << std::endl;
		}
		else
		{
			std::cout << "pozitiv" << std::endl;
		}

		system("pause");
		system("cls");

	}
}

//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
