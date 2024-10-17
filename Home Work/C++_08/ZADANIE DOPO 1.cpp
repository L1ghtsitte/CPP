#include <iostream>

using namespace std;

int sum(int sum)
{

	int num = 0;

	for (int i = 0; i <= sum; i++)
	{

		num += i;


	}

	return num;

}

int main()
{

	system("chcp 1251");

	int num1;

	cout << "¬ведите число = ";
	cin >> num1;

	cout << "—умма чисел = " << sum(num1);

}
