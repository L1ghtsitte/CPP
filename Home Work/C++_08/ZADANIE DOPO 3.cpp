#include <iostream>

double sixxxten(double num) 
{
  
    if ((num >= 100000 && num <= 999999) || (num <= -100000 && num >= -999999)) 
    {

        std::cout << "����� �������� ������������." << std::endl;

    }
    else 
    {

        std::cout << "����� �� �������� ������������." << std::endl;

    }
    return num;
}

int main() 
{

    system("chcp 1251");

    double num;

    std::cout << "������� ����� = ";
    std::cin >> num;

    sixxxten(num);

}