#include <iostream>


int main()
{
    int n;
    int number;
    int min;
    int max;
    int difference;

    std::cout << "Enter the number of numbers: ";
    std::cin >> n;
    if (n <= 0) {
        std::cout << "Invalid number of numbers!" << std::endl;

        return 0;
    }
    std::cout << "Enter number 1: ";
    std::cin >> number;
    min = number;
    max = number;
    for (int i = 1; i < n; ++i)
    {
        std::cout << "Enter a number " << i + 1 << ": ";
        std::cin >> number;
        if (number < min) 
        {
            min = number;
        }
        if (number > max) 
        {
            max = number;
        }
    }
    difference = max - min;
    std::cout << "Smallest number: " << min << std::endl;
    std::cout << "Largest number: " << max << std::endl;
    std::cout << "The difference between them is: " << difference << std::endl;
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\