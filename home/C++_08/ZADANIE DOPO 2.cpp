#include <iostream>

using namespace std;

int proizv;

int stepen(int stepen, int chislo)
{
	int num;

	num = chislo;
	for (int i = 1; i < stepen; i++)
	{
		num = num * chislo;
	}
	proizv = num;
	return stepen, num;
}

int main()
{
	int num1, step;

	cout << "Enter number = ";
	cin >> num1;
	cout << "Enter degree = ";
	cin >> step;
	stepen(step, num1);
	cout << "Your number to the power = " << proizv;
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
