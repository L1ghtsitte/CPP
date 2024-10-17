#include <iostream>

int mySum(int num1, int num2)
{

	int sum = 0;

	sum = num1 + num2;

	std::cout << "Hello world!";

	return num1 + num2;

}

void mySum2(int num3, int num4);


int main() 
{

	int num1, num2;

	std::cin >> num1 >> num2;

	std::cout << mySum(num1, num2);

	std::cout << mySum(3, 2), mySum(mySum(3, 2), 2);

	std::cout << mySum(3 + 324 - 394 * 2938 /234, 2 + 239 - 284 * 82 / 234);

	mySum2(3, 2);

	return 0;

}

void mySum2(int num3, int num4)
{

	int sum = 0;

	sum = num3 + num4;

	std::cout << sum;

}