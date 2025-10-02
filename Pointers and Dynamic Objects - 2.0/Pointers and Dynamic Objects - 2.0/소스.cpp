#include <iostream>

using namespace std;

void main()
{
	int a[5] = { 0, 10, 20, 30, 40 };
	int* p = &a[1];
	for (int i = 0; i < 5; i++)
		cout << *(a + i) << endl;
	cout << p[0] << endl;
	cout << p[-1] << " = " << *(p - 1) << endl;
}


