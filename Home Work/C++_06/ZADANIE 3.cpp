#include <iostream>

using namespace std;

int main()
{

	system("chcp 1251");

	double cost92, cost95, cost100, sum92, sum95, sum100, dist, rashod /*�������*/;

	cout << " ������� ��������� ������� = ";
	cin >> dist;	

	cout << " ������� ������ �� 100�� = ";
	cin >> rashod;	

	cout << " ������� ���� 92 ������� = ";
	cin >> cost92;

	cout << " ������� ���� 95 ������� = ";
	cin >> cost95;	

	cout << " ������� ���� 100 ������� = ";
	cin >> cost100;

	sum92 = dist * cost92 * rashod / 100;

	sum95 = dist * cost95 * rashod / 100;

	sum100 = dist * cost100 * rashod / 100;

	cout << "\t|��������|\t|����|\t|����(���)|\t|" << "92" << " |\t\t| " << cost92 << " |\t\t| " << sum92 << "\n";
	cout << "\t|��������|\t|����|\t|����(���)|\t|" << "95" << " |\t\t| " << cost95 << " |\t\t| " << sum95 << "\n";
	cout << "\t|��������|\t|����|\t|����(���)|    |" << " 100 " << "|\t\t| " << cost100 << " |\t\t| " << sum100 << "\n";

}