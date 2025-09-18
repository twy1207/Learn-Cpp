#include <iostream>	

int fact(int n)
{
	// fact(n) = n * fact(n - 1)
	if (n == 1 || n == 0) // 1, 0 ÀÏ¶§ n - 1 (X), 1! = 1, 0! = 1
		return 1;
	else
		return n * fact(n - 1);
}
int main()
{
	int number;
	std::cout << "Input the number: ";
	std::cin >> number;
	std::cout << "Factorial of " << number << " : " << fact(number) << std::endl;
	return 0;
}