#include <iostream>

int main()
{
	const int size = 100;
	int arr[size] = { };
	int vibor;

	std::cout << "1. EVEN\n";
	std::cout << "2. ODD\n";
	std::cin >> vibor;
	for (int i = 0; i < size; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i < size; i++)
	{
		if (vibor == 1 && arr[i] % 2 == 0) std::cout << arr[i] << " ";
		if (vibor == 2 && arr[i] % 2 != 0) std::cout << arr[i] << " ";
	}
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\