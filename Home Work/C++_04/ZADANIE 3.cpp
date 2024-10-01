#include <iostream>

int main() 
{

	system("chcp 1251");

	double v = 0 ;	
	double a = 0 ;
	double t = 0 ;
	double S = 0 ;

	std::cout << "Ââåäèòå çíà÷åíèå ñêîðîñòè = ";
	std::cin >> v;	
	std::cout << "Ââåäèòå çíà÷åíèå óñêîðåíèÿ = ";
	std::cin >> a;	
	std::cout << "Ââåäèòå âðåìÿ = ";
	std::cin >> t;

	S = v * t + (a * t * t) / 2;

	std::cout << "Ïðîéäåíûé ïóòü = " << S;

	//Выполнил L1ghtsitte//https://github.com/L1ghtsitte/CPP


}
