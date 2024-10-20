#include <iostream>

#include <string>

int main() 
{
    int vibor1 = 0;
    int i = 0;

    do {
        std::cout << "1. Calculator\n";
        std::cout << "2. Calculate the modulus\n";
        std::cout << "3. Calculate the sum of the moduli\n";
        std::cout << "4. Text repeater\n";
        std::cout << "0. Exit\n";
        std::cout << "Your choice = ";
        std::cin >> vibor1;
        system("cls");
        if (vibor1 == 1) 
        {
            int vibor2;
            double num1;
            double num2;
            double sum;

            std::cout << "1. Calculator" << std::endl;
            std::cout << "Enter the first number" << std::endl;
            std::cin >> num1;
            std::cout << "Enter the second number" << std::endl;
            std::cin >> num2;
            system("cls");
            std::cout << "Choose an action" << std::endl;
            std::cout << "1. Sum" << std::endl;
            std::cout << "2. Product" << std::endl;
            std::cout << "3. Difference of the FIRST number with the SECOND" << std::endl;
            std::cout << "4. Difference of the SECOND number with the FIRST" << std::endl;
            std::cout << "5. Quotient of the FIRST to the SECOND" << std::endl;
            std::cout << "6. Quotient from SECOND to FIRST" << std::endl;
            std::cout << "Your choice = ";
            std::cin >> vibor2;
            if (vibor2 == 1) 
            {
                sum = num1 + num2;
                std::cout << "Sum of numbers = " << sum << std::endl;
            }
            if (vibor2 == 2) 
            {
                sum = num1 * num2;
                std::cout << "Product of numbers = " << sum << std::endl;
            }
            if (vibor2 == 3) 
            {
                sum = num1 - num2;
                std::cout << "Difference of the FIRST number with the SECOND = " << sum << std::endl;
            }
            if (vibor2 == 4) 
            {
                sum = num2 - num1;
                std::cout << "Difference of the SECOND number with the FIRST = " << sum << std::endl;
            }
            if (vibor2 == 5) 
            {
                sum = num1 / num2;
                std::cout << "Quotient from FIRST to SECOND = " << sum << std::endl;
            }
            if (vibor2 == 1) 
            {
                sum = num2 / num1;
                std::cout << "Quotient from SECOND to FIRST = " << sum << std::endl;
            }
        }
        if (vibor1 == 2) 
        {
            double num1;

            std::cout << "2. Calculate the modulus" << std::endl;
            std::cout << "Enter the number whose modulus you need - ";
            std::cin >> num1;
            if (num1 < 0) 
            {
                double num2;

                num2 = num1 * (-1);
                std::cout << "Modulus of the entered number = " << num2 << std::endl;
            }
            if (num1 >= 0) 
            {
                double num2;

                num2 = num1;
                std::cout << "Modulus of the entered number = " << num2 << std::endl;
            }
            if (vibor1 == 3) 
            {
                double num1;
                double num2;
                double mod1;
                double mod2;
                double sumMod;

                std::cout << "3. Calculate the sum of the moduli" << std::endl;
                std::cout << "Enter the first number - ";
                std::cin >> num1;
                std::cout << "Enter the second number - ";
                std::cin >> num2;
                system("cls");
                if (num1 < 0) 
                {
                    mod1 = num1 * (-1);
                    std::cout << "Module of the first number = " << mod1 << std::endl;
                }
                if (num1 >= 0) 
                {
                    mod1 = num1;
                    std::cout << "Module of the first number = " << mod1 << std::endl;
                }
                if (num2 < 0) 
                {
                    mod2 = num2 * (-1);
                    std::cout << "Module of the second number = " << mod2 << std::endl;
                }
                if (num2 >= 0) 
                {
                    mod2 = num2;
                    std::cout << "Module of the second number = " << mod2 << std::endl;
                }
                sumMod = mod1 + mod2;
                std::cout << "Sum of moduli = " << sumMod << std::endl;
            }
            if (vibor1 == 4) 
            {
                std::string text;
                int num1;

                std::cout << "4. Text repeater" << std::endl;
                std::cout << "Enter your text - ";
                std::cin >> text;
                std::cout << "Enter the number of repetitions - ";
                std::cin >> num1;
                system("cls");
                while (i < num1) {
                    i = i + 1;
                    std::cout << i << ". " << text << std::endl;
                }
                system("pause");
            }
        }
        while (vibor1 != 0);
    }
    //whrite by L1ghtsitte\\
    //{https://github.com/L1ghtsitte/CPP}\\