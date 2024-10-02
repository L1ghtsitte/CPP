#include <iostream>

int main() 
{

    system("chcp 1251");

    int start = 0;
    int end = 0;

    std::cout << "Введите начальное число: ";
    std::cin >> start;
    std::cout << "Введите конечное число: ";
    std::cin >> end;

    if (start > end) 
    {
        std::cout << "Ошибка: начальное число больше конечного." << std::endl;

    }

    if (start < end)
    {
        std::cout << "Число меньше начального" << std::endl;

    }

    int sum = 0;

    std::cout << "Все целые числа от " << start << " до " << end << " включительно:" << std::endl;

    for (int i = start; i <= end; ++i) 
    {
        std::cout << i << "\n";
        sum += i;
    }
    std::cout << std::endl;
    std::cout << "Сумма всех чисел: " << sum << std::endl;

}