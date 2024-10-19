#include <iostream>

using namespace std;

int main()
{

	system("chcp 1251");

	double v, t, s;

	cout << "Введите рстояние в киллометрах = ";
	cin >> s;
	cout << "Введите время в часах = ";
	cin >> t;

	v = s / t ;

	cout << "Вам нужно двигатся со скоростью = " << v << " км/ч\n";

	v = s / t / 60;

	cout << "Вам нужно двигатся со скоростью = " << v << " км/м\n";

	v = s / t / 3.6;

	cout << "Вам нужно двигатся со скоростью = " << v << " м/с\n";

//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\

}
