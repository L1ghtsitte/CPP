#include <iostream>

using namespace std;

int mySum(int num1, int num2) 
{

	int sum;

	sum = num1 * num2;
	return num1 * num2;

}

void masseng(int num1, int num2)
{
	cout << "Helllo world!\n";
}

void cycle(int num1, int num2)
{
	for (int i = -19; i <= 24; i++)
	{
		cout << i << endl;
	}
}


int main () 
{
	cout << mySum(7, 3) << endl;
	masseng(1, 2);
	cycle(1, 2);
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\