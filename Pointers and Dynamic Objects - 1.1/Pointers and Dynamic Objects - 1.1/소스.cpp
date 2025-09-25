#include <iostream>

void doubleIt(int* p)
{
	*p *= 2;
}

void main()
{
	int a = 16;
	doubleIt(&a);

	std::cout << a;
}