#include <iostream>

int main() 
{
	int a = 'A';
	int* ptr = &a;
	int** ptr2 = &ptr;
	//주소값 -> 주소연산자
	std::cout << "a 주소 : " << &a << std::endl;
	std::cout << "ptr 주소 : " << &ptr << std::endl;
	std::cout << "ptr2 주소 : " << &ptr2 << std::endl;

	//참조값 -> 그대로
	std::cout << "a 참조값 : " <<  a << std::endl;
	std::cout << "ptr 참조값 : " <<  *ptr << std::endl;
	std::cout << "ptr2 참조값 : " << *ptr2 << std::endl;
	std::cout << "ptr2 이중 참조값 : " << **ptr2 << std::endl;

	return 0;
}