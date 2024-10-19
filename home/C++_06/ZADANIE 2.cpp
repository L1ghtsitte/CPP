#include <iostream>

using namespace std;

int main()
{
	int startS, startM, startH, endS, endM, endH, price;
	double razeS, razeM, razeH, pay;
	price = 2;
	cout << " Enter the start time (hours) - ";
	cin >> startH;
	cout << " Enter start time (minutes) - ";
	cin >> startM;
	cout << " Enter start time (seconds) - ";
	cin >> startS;
	cout << " Enter the end time (hours) - ";
	cin >> endH;
	cout << " Enter end time (minutes) - ";
	cin >> endM;
	cout << " Enter end time (seconds) - ";
	cin >> endS;
	razeS = endS - startS;
	razeM = endM - startM;
	razeH = endH - startH;
	pay = ((razeH * 60) + razeM + (razeS / 60)) * 2;
	cout << " For " << razeH << " hours " << razeM << " minutes " << razeS << " seconds\n";
	cout << " You must " << pay << " hryvnia ";
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
