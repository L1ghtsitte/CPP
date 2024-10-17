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

	system("chcp 1251");

	int num1, step;

	cout << "Введите число = ";
	cin >> num1;


	cout << "Введите степень = ";
	cin >> step;

	stepen(step, num1);

	cout << "Ваше число в степени = " << proizv;

//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\

}
