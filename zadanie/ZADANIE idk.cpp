#include <iostream>

int main()
{

	system("chcp 1251");

	int vibor1 = 0;
	int i = 0;

	std::cout << "1. Калькулятор" << std::endl;
	std::cout << "2. Вычеслить модуль" << std::endl;
	std::cout << "3. Вычеслить сумму модулей" << std::endl;
	std::cout << "4. Повторитель текста" << std::endl;

	std::cout << "Ваш выбор = ";
	std::cin >> vibor1;

	system("cls");

	if (vibor1 == 1)
	{
		
		int vibor2;
		double num1;
		double num2;
		double sum;


		std::cout << "1. Калькулятор" << std::endl;

		std::cout << "Введите первое число" << std::endl;
		std::cin >> num1;
		std::cout << "Введите второе число" << std::endl;
		std::cin >> num2;

		system("cls");

		std::cout << "Выберите действие" << std::endl;
		std::cout << "1. Сумма" << std::endl;
		std::cout << "2. Произведение" << std::endl;
		std::cout << "3. Разности ПЕРВОГО числа со ВТОРЫМ" << std::endl;
		std::cout << "4. Разности ВТОРОГО числа с ПЕРВЫМ" << std::endl;
		std::cout << "5. Часное из ПЕРВОГО ко ВТОРОМУ" << std::endl;
		std::cout << "6. Часное из ВТОРОГО к ПЕРВОМУ" << std::endl;

		std::cout << "Ваш выбор = ";
		std::cin >> vibor2;
		if (vibor2 == 1)
		{

			sum = num1 + num2;

			std::cout << "Сумма чисел = " << sum << std::endl;

		}
		if (vibor2 == 2)
		{

			sum = num1 * num2;

			std::cout << "Произведение чисел = " << sum << std::endl;

		}		
		if (vibor2 == 3)
		{

			sum = num1 - num2;

			std::cout << "Разность ПЕРВОГО числа со ВТОРЫМ = " << sum << std::endl;

		}
		if (vibor2 == 4)
		{

			sum = num2 - num1;

			std::cout << "Разность ВТОРОГО числа с ПЕРВЫМ = " << sum << std::endl;

		}
		if (vibor2 == 5)
		{

			sum = num1 / num2;

			std::cout << "Часное из ПЕРВОГО ко ВТОРОМУ = " << sum << std::endl;

		}
		if (vibor2 == 1)
		{

			sum = num2 / num1;

			std::cout << "Часное из ВТОРОГО к ПЕРВОМУ = " << sum << std::endl;

		}

	}

	if (vibor1 == 2) 
	{

		double num1;

		std::cout << "2. Вычеслить модуль" << std::endl;

		std::cout << "Введите число модуль которого вам требуется - ";
		std::cin >> num1;

		if (num1 < 0)
		{

			double num2;

			num2 = num1 * (-1);

			std::cout << "Модуль введеного числа = " << num2 << std::endl;

		}

		if (num1 >= 0)
		{

			double num2;

			num2 = num1;

			std::cout << "Модуль введеного числа = " << num2 << std::endl;

		}

	}

	if (vibor1 == 3)
	{

		double num1;
		double num2;
		double mod1;
		double mod2;
		double sumMod;

		std::cout << "3. Вычеслить сумму модулей" << std::endl;

		std::cout << "Введите первое число - ";
		std::cin >> num1;
		std::cout << "Введите второе число - ";
		std::cin >> num2;

		system("cls");

		if (num1 < 0)
		{

			mod1 = num1 * (-1);

			std::cout << "Модуль первого числа = " << mod1 << std::endl;

		}

		if (num1 >= 0)
		{

			mod1 = num1;

			std::cout << "Модуль первого числа = " << mod1 << std::endl;

		}

		if (num2 < 0)
		{

			mod2 = num2 * (-1);

			std::cout << "Модуль второго числа = " << mod2 << std::endl;

		}

		if (num2 >= 0)
		{

			mod2 = num2;

			std::cout << "Модуль второго числа = " << mod2 << std::endl;


		}

		sumMod = mod1 + mod2;

		std::cout << "Сумма модулей = " << sumMod << std::endl;
	}

	if (vibor1 == 4)
	{

		int num1;
		

		std::cout << "4. Повторитель текста" << std::endl;

		std::cout << "Введите количество повторени - ";

		std::cin >> num1;

		system("cls");

		while ( i < num1)
		{
			i = i + 1;

			std::cout << i << ". Hello world" << std::endl;
		}

	}


}
