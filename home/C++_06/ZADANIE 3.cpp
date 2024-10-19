#include <iostream>

using namespace std;

int main()
{

	system("chcp 1251");

	double cost92, cost95, cost100, sum92, sum95, sum100, dist, rashod /*чушпаны*/;

	cout << " Введите растояние поездки = ";
	cin >> dist;	

	cout << " Введите расход на 100км = ";
	cin >> rashod;	

	cout << " Введите цену 92 бензина = ";
	cin >> cost92;

	cout << " Введите цену 95 бензина = ";
	cin >> cost95;	

	cout << " Введите цену 100 бензина = ";
	cin >> cost100;

	sum92 = dist * cost92 * rashod / 100;

	sum95 = dist * cost95 * rashod / 100;

	sum100 = dist * cost100 * rashod / 100;

	cout << "\t|НАЗВАНИЕ|\t|ЦЕНА|\t|ЦЕНА(общ)|\t|" << "92" << " |\t\t| " << cost92 << " |\t\t| " << sum92 << "\n";
	cout << "\t|НАЗВАНИЕ|\t|ЦЕНА|\t|ЦЕНА(общ)|\t|" << "95" << " |\t\t| " << cost95 << " |\t\t| " << sum95 << "\n";
	cout << "\t|НАЗВАНИЕ|\t|ЦЕНА|\t|ЦЕНА(общ)|    |" << " 100 " << "|\t\t| " << cost100 << " |\t\t| " << sum100 << "\n";

//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\

}
