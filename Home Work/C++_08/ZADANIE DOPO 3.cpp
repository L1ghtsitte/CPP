#include <iostream>

double sixxxten(double num) 
{
  
    if ((num >= 100000 && num <= 999999) || (num <= -100000 && num >= -999999)) 
    {

        std::cout << "Число является шестизначным." << std::endl;

    }
    else 
    {

        std::cout << "Число не является шестизначным." << std::endl;

    }
    return num;
}

int main() 
{

    system("chcp 1251");

    double num;

    std::cout << "Введите число = ";
    std::cin >> num;

    sixxxten(num);

}