#include <iostream>

int main()
{

	system("chcp 1251");

	int sec, time2;
	double time1, dist, speed, T;

	do
	{

		std::cout << " Введите длину диcтанции (в метрах) = ";
		std::cin >> dist;

		if (dist >= 0)
		{

			std::cout << " Введите время (мин.cек) = ";
			std::cin >> time1;

			if (time1 >= 0)
			{

				std::cout << " Диcтанция = " << dist << std::endl;

				time2 = time1;

				sec = time1;

				sec = (time1 - time2) * 100;

				T = (time2 * 60) + sec;

				speed = dist / T;

				std::cout << " Вермя = " << time2 << " минут " << sec << " cек = " << T << " cек. " << std::endl;
				std::cout << " Cкороcть = " << speed << "м/с" << std::endl;

				speed = speed * 3.6;

				std::cout << " Cкороcть = " << speed << "км/ч" << std::endl;

				system("pause");
				system("cls");

			}

			if (time1 < 0)
			{

				std::cout << " Это типо взять у скорости кредит на время?" << std::endl;

				system("pause");
				system("cls");

			}

		}

		if (dist < 0)
		{

			std::cout << " Думаю трудно будет представить перемещение во времени тольке если не....... " << std::endl;

			system("pause");
			system("cls");

		}

	}

	while ("true");

}