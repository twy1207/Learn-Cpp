#include <iostream>
using namespace std;
void main() 
{
	int twod[3][4] = { {0,1,2,3}, {4,5,6,7}, {8,9,10,11} };
	int oned[12];

	cout << twod[2][1] << endl;
	cout << twod + 2 << endl;
	cout << *(twod + 2) << " = " << twod[2] << endl;
	cout << twod[2][1] << " = " << *(*(twod + 2) + 1) << endl;
	/*
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++)
			oned[i * 4 + j] = twod[i][j];
	}
	for (int i = 0; i < 12; i++)
		std::cout << oned[i] << std::endl;
	*/
}
/*
void main()
{
	int a = 1, b = 2, c = 3;
	int* p[5]; //array of pointers
	p[0] = &a;
}

void main() 
{
	int* p;
	p = 0;
	std::cout << p << std::endl; //prints 0
	std::cout << &p << std::endl;//prints address of p
	std::cout << *p << std::endl;//Error!
}
*/

