#include <iostream>


int f(int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return f(n - 1) + f(n - 2);
	return 0;
} // 피보나치 수열

void main()
{
	std::cout << f(3) << std::endl;
}