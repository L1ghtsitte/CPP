#include <iostream>

int main() 
{
    int start = 0;
    int end = 0;

    std::cout << "Enter starting number: ";
    std::cin >> start;
    std::cout << "Enter ending number: ";
    std::cin >> end;
    if (start > end)
    {
        std::cout << "Error: starting number is greater than ending number." << std::endl;

    }
    if (start < end)
    {
        std::cout << "Number is less than starting number" << std::endl;

    }
    int sum = 0;

    std::cout << "All integers from " << start << " to " << end << " inclusive:" << std::endl;
    for (int i = start; i <= end; ++i) 
    {
        std::cout << i << "\n";
        sum += i;
    } 
    std::cout << std::endl;
    std::cout << "Sum of all numbers: " << sum << std::endl;
}
//whrite by L1ghtsitte\\
//{https://github.com/L1ghtsitte/CPP}\\