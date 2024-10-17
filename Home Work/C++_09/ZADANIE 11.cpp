#include <iostream>

int main()
{
	system("chcp 1251");

	const int size = 5;
	int arr[size] = {};
	int num = 0;
	int min = arr[0];
	int max = arr[0];

	std::cout << std::endl;
	std::cout << "Введите 5 чисел - ";
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
	std::cout << "Сумма = " << num;
	std::cout << std::endl;
	std::cout << "Средне арифмитическое = " << num / size;
	for (int i = 0; i < size; i++)
	{
		if (max > arr[i])max = arr[i];
		if (min < arr[i])min = arr[i];
	}
	std::cout << std::endl;
	std::cout << "Минимальное число = " << max;
	std::cout << std::endl;
	std::cout << "Максимальное число = " << min;
	std::cout << std::endl;

//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\

}
