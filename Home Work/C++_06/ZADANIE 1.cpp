#include <iostream>

using namespace std;

int main()
{

	system("chcp 1251");

	double v, t, s;

	cout << "¬ведите рсто€ние в киллометрах = ";
	cin >> s;
	cout << "¬ведите врем€ в часах = ";
	cin >> t;

	v = s / t ;

	cout << "¬ам нужно двигатс€ со скоростью = " << v << " км/ч\n";

	v = s / t / 60;

	cout << "¬ам нужно двигатс€ со скоростью = " << v << " км/м\n";

	v = s / t / 3.6;

	cout << "¬ам нужно двигатс€ со скоростью = " << v << " м/с\n";

}