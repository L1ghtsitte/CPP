#include <iostream>

using namespace std;

int main()
{

	system("chcp 1251");

	int startS, startM, startH, endS, endM, endH, price;
	double razeS, razeM, razeH, pay;

	price = 2;

	cout << " ������� ����� ������(�����) - ";
	cin >> startH;

	cout << " ������� ����� ������(�����) - ";
	cin >> startM;

	cout << " ������� ����� ������(������) - ";
	cin >> startS;

	cout << " ������� ����� �����(�����) - ";
	cin >> endH;

	cout << " ������� ����� �����(�����) - ";
	cin >> endM;

	cout << " ������� ����� �����(������) - ";
	cin >> endS;

	razeS = endS - startS;

	razeM = endM - startM;

	razeH = endH - startH;

	pay = ((razeH * 60) + razeM + (razeS / 60)) * 2;

	cout << " �� " << razeH << " ����� " << razeM << " ����� " << razeS << " ������\n";

	cout << " �� ������ " << pay << " ������ ";

}