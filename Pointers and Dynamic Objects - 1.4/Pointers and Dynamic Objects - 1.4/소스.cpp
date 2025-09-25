// Reference Variables
#include <iostream>

void swap_using_value(int a, int b) { int tmp = a; a = b; b = tmp; }
void swap_using_ref(int& a, int& b) { int tmp = a; a = b; b = tmp; }
void swap_using_ptr(int* a, int* b) { int tmp = *a; *a = *b; *b = tmp; }
void main() 
{
	int u, v;
	u = 1, v = 2; swap_using_value(u, v);
	std::cout << u << " " << v << std::endl;
	u = 1, v = 2; swap_using_ref(u, v);
	std::cout << u << " " << v << std::endl;
	u = 1, v = 2; swap_using_ptr(&u, &v);
	std::cout << u << " " << v << std::endl;
}

/*
void main() 
{
	double d0 = 10.0, d1 = 10.0;
	double* d_ptr = &d0;
	double& d_ref = d0;
	d_ptr = &d1; // d_ptr now points to d1
	d_ref = 20.0; // assign 20.0 to d0
	std::cout << d0 << "\n" << d1;
}
*/


/*
void main() {
	int m = 10;
	int& j = m; // j is a reference variable
	std::cout << "value of m = " << m << std::endl;
	//print 10
	j = 18;
	std::cout << "value of m = " << m << std::endl;
	// print 18
}
*/
