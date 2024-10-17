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

	cout << "¬ведите число = ";
	cin >> num1;


	cout << "¬ведите степень = ";
	cin >> step;

	stepen(step, num1);

	cout << "¬аше число в степени = " << proizv;

}
