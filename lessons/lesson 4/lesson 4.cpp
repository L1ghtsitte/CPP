#include <iostream>

int main()
{

	system("chcp 1251");

	int num1, num2, action;

	std::cout << "������� ������ ����� = ";

	std::cin >> num1;

	std::cout << "������� ������ ����� = ";

	std::cin >> num2;

	std::cout << "������� �������� = ";
	std::cin >> action;

	switch (action)
	{

	case 0:
	{

	std::cout << "��������: " << num1 + num2;

	break;

	}
	case 1:
	{

		std::cout << "���������: " << num1 * num2;

		break;

	}
	default:
	{

		std::cout << "������ " << num1 * num2;

	}

	}

}