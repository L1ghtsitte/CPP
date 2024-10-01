#include <iostream>


int main()
{

    system("chcp 1251");

    int n;
    int number;
    int min;
    int max;
    int difference;

    std::cout << "Введите количество чисел: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Некорректное количество чисел!" << std::endl;
    }


    std::cout << "Введите число 1: ";
    std::cin >> number;

    min = number;
    max = number;

    for (int i = 1; i < n; ++i) {
        std::cout << "Введите число " << i + 1 << ": ";
        std::cin >> number;

        if (number < min) {
            min = number;
        }
        if (number > max) {
            max = number;
        }
    }

    difference = max - min;

    std::cout << "Наименьшее число: " << min << std::endl;
    std::cout << "Наибольшее число: " << max << std::endl;
    std::cout << "Разница между ними: " << difference << std::endl;


    //Выполнил L1ghtsitte//https://github.com/L1ghtsitte/CPP

}
