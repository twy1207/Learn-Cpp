#include <iostream>

void main() 
{
	int ia[] = { 6,5,4,3,2,1 };
	int* ptr_i = &ia[3];

	double da[] = { 6.1,5.1,4.1,3.1,2.1,1.1,0.1 };
	double* ptr_d = &da[3];

	std::cout << *(ptr_i + 2) << std::endl; // 3+2, 5번째 요소
	std::cout << *(ptr_d + 2) << std::endl; // 3+2, 5번째 요소
	// *(a+n) == a[n]
}