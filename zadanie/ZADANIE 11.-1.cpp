#include <iostream>

int main()
{
	const int size = 7;
	float arr[size] = {};

	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	std::cout << "Negative = ";
	for (int i = 0; i < size; i++)
	{
		if (arr[i] < 0)std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Integer positive array elements = ";
	for (int i = 0; i < size; i++)
	{
		int n;
		n = arr[i];
		if (arr[i] > 0)if (n == arr[i])std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "Non-integer array elements = ";
	for (int i = 0; i < size; i++)
	{
		int n;
		n = arr[i];
		if (n != arr[i])std::cout << arr[i] << " ";
	}
	std::cout << std::endl;
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\