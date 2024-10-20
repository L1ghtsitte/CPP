#include <iostream>

int main()
{
	const int size = 5;
	int arr[size] = {};
	int num = 0;
	int min = arr[0];
	int max = arr[0];

	std::cout << std::endl;
	std::cout << "Enter 5 numbers - ";
	std::cout << std::endl;
	for (int i = 0; i < size; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";
	}
	for (int i = 0; i < size; i++)
	{
		num += arr[i];
	}
	std::cout << std::endl;
	std::cout << "Sum = " << num;
	std::cout << std::endl;
	std::cout << "Arithmetic mean = " << num / size;
	for (int i = 0; i < size; i++)
	{
		if (max > arr[i])max = arr[i];
		if (min < arr[i])min = arr[i];
	}
	std::cout << std::endl;
	std::cout << "Minimum number = " << max;
	std::cout << std::endl;
	std::cout << "Maximum number = " << min;
	std::cout << std::endl;

}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\