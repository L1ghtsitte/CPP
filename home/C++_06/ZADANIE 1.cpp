#include <iostream>

using namespace std;

int main()
{
	double v, t, s;

	cout << "Enter distance in kilometers = ";
	cin >> s;
	cout << "Enter time in hours = ";
	cin >> t;
	v = s / t;
	cout << "You need to move at speed = " << v << " km/h\n";
	v = s / t / 60;
	cout << "You need to move at speed = " << v << " km/m\n";
	v = s / t / 3.6;
	cout << "You need to move at speed = " << v << " m/s\n";
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
