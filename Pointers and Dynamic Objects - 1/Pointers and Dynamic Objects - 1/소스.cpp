#include <iostream>
using namespace std;

void main() {
	int a = 100, b = 88, c = 8;
	int* p1 = &a, * p2, * p3 = &c;
	p2 = &b;// p2 points to b
	p2 = p1; // p2 points to a
	b = *p3;//assign c to b
	*p2 = *p3;//assign c to a
	std::cout << a << b << c;
	// output : 888
}

/*
int main()
{
	int a;
	int* p;
	int** q; // 이중포인터 

	a = 58;
	p = &a;
	q = &p;

	cout << a << " ";
	cout << *p << " ";
	cout << **q << " ";
	// output
	// 58 58 58
}
*/

/*
int main()
{
	int a = 100;

	int* p = &a;

	cout << a << "\t\t\t" << &a << endl;
	cout << p << "\t" << &p << endl;
	cout << sizeof(p) << endl;

	return 0;
}
*/
