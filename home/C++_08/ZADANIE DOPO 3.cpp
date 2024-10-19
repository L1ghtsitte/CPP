#include <iostream>

double sixxxten(double num) 
{
    if ((num >= 100000 && num <= 999999) || (num <= -100000 && num >= -999999))
    {
        std::cout << "The entered number is six-digit." << std::endl;
    }
    else
    {
        std::cout << "The number entered is not six digits." << std::endl;
    }
    return num;
}

int main() 
{
    double num;

    std::cout << "Your number = ";
    std::cin >> num;
    sixxxten(num);
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\

