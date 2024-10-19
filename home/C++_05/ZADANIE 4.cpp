#include <iostream>

int main()
{
	int sec, time2;
	double time1, dist, speed, T;

	do
	{
		std::cout << " Enter distance length (in meters) = ";
		std::cin >> dist;
		if (dist >= 0)
		{
			std::cout << " Enter time (min.sec) = ";
			std::cin >> time1;
			if (time1 >= 0)
			{
				std::cout << " Distance = " << dist << std::endl;
				time2 = time1;
				sec = time1;
				sec = (time1 - time2) * 100;
				T = (time2 * 60) + sec;
				speed = dist / T;
				std::cout << " Time = " << time2 << " minutes " << sec << " sec = " << T << " sec. " << std::endl;
				std::cout << " Speed ​​= " << speed << "m/s" << std::endl;
				speed = speed * 3.6;
				std::cout << " Speed ​​= " << speed << "km/h" << std::endl;
				system("pause");
				system("cls");
			}
			if (time1 < 0)
			{
				std::cout << " Is this supposed to take a loan from speed for a while?" << std::endl;
				system("pause");
				system("cls");
			}
		}
		if (dist < 0)
		{
			std::cout << "I think it will be difficult to imagine time travel unless....... " << std::endl;
			system("pause");
			system("cls");
		}
	}
	while ("true");
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\
