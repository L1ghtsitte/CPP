#include <iostream>

using namespace std;

int main()
{

	system("chcp 1251");

	double v, t, s;

	cout << "������� �������� � ����������� = ";
	cin >> s;
	cout << "������� ����� � ����� = ";
	cin >> t;

	v = s / t ;

	cout << "��� ����� �������� �� ��������� = " << v << " ��/�\n";

	v = s / t / 60;

	cout << "��� ����� �������� �� ��������� = " << v << " ��/�\n";

	v = s / t / 3.6;

	cout << "��� ����� �������� �� ��������� = " << v << " �/�\n";

}