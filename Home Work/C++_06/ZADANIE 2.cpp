#include <iostream>

using namespace std;

int main()
{

	system("chcp 1251");

	int startS, startM, startH, endS, endM, endH, price;
	double razeS, razeM, razeH, pay;

	price = 2;

	cout << " Введите время начала(часов) - ";
	cin >> startH;

	cout << " Введите время начала(минут) - ";
	cin >> startM;

	cout << " Введите время начала(секунд) - ";
	cin >> startS;

	cout << " Введите время конца(часов) - ";
	cin >> endH;

	cout << " Введите время конца(минут) - ";
	cin >> endM;

	cout << " Введите время конца(секунд) - ";
	cin >> endS;

	razeS = endS - startS;

	razeM = endM - startM;

	razeH = endH - startH;

	pay = ((razeH * 60) + razeM + (razeS / 60)) * 2;

	cout << " За " << razeH << " часов " << razeM << " минут " << razeS << " секунд\n";

	cout << " Вы должны " << pay << " гривен ";

//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\

}
