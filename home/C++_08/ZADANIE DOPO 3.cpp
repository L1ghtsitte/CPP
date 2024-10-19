#include <iostream>

double sixxxten(double num) 
{
  
    if ((num >= 100000 && num <= 999999) || (num <= -100000 && num >= -999999)) 
    {

        std::cout << "×èñëî ÿâëÿåòñÿ øåñòèçíà÷íûì." << std::endl;

    }
    else 
    {

        std::cout << "×èñëî íå ÿâëÿåòñÿ øåñòèçíà÷íûì." << std::endl;

    }
    return num;
}

int main() 
{

    system("chcp 1251");

    double num;

    std::cout << "Ââåäèòå ÷èñëî = ";
    std::cin >> num;

    sixxxten(num);

//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\

}
