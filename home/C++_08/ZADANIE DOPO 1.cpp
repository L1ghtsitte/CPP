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
	int num1;

	cout << "Enter number = ";
	cin >> num1;
	cout << "Sum of numbers = " << sum(num1);
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
