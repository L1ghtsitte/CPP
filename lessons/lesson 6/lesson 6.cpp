#include <iostream>
/*
Если код пишется в VS22 то функция time если нет то для еспользования функции нужно включить еще одну библиотеку
*/
#include <ctime>

int main()
{

	srand(int(time(0)));

	const int size = 20;

	int arr[size] = { };

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10 - 5;

	}
	for (int i = 0; i < size; i++)
	{
		std::cout << arr[i] << " ";

	}



}