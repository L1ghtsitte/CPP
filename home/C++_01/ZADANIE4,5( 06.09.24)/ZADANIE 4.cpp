#include <iostream>

int main()
{
	system("chcp 1251");

	int a;
	int b;

	std::cout << "������� ������ �����: ";
	std::cin >> a;
	std::cout << "������� ������ �����: ";
	std::cin >> b;


	std::cout << "�������: " << a - b << "\n";
	std::cout << "�����: " << a + b << "\n";
	std::cout << "������������: " << a * b << "\n";

	std::cout << "�������� �������: �������� ������ 23/���6\n";
}
