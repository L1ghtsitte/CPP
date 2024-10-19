#include <iostream>

using namespace std;

int main()
{
	double cost92, cost95, cost100, sum92, sum95, sum100, dist, rashod /*чушпаны*/;

	cout << " Enter travel distance = ";
	cin >> dist;
	cout << " Enter consumption per 100 km = ";
	cin >> rashod;
	cout << " Enter the price of 92 gasoline = ";
	cin >> cost92;
	cout << " Enter the price of 95 gasoline = ";
	cin >> cost95;
	cout << " Enter the price of 100 gasoline = ";
	cin >> cost100;
	sum92 = dist * cost92 * rashod / 100;
	sum95 = dist * cost95 * rashod / 100;
	sum100 = dist * cost100 * rashod / 100;
	cout << "|NAME|\t|PRICE|\t|PRICE(total)|\t|" << "92" << " |\t\t| " << cost92 << " |\t\t| " << sum92 << "\n";
	cout << "|NAME|\t|PRICE|\t|PRICE(total)|\t|" << "95" << " |\t\t| " << cost95 << " |\t\t| " << sum95 << "\n";
	cout << "|NAME|\t|PRICE|\t|PRICE(total)|\t|" << " 100 " << "|\t\t| " << cost100 << " |\t\t| " << sum100 << "\n";
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
