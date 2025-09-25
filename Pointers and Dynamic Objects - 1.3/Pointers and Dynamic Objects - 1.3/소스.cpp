// Pointers and the const Qualifier
#include <iostream>

void main()
{
	const double d0 = 10.0;
	double d1 = 11.0, ㅇ2 = 11,1;
	const double* p1 = &d0; // d0가 const형임을 나타내줌

	// *p1 = 11.0; -> 수정불가

	double* const p2 = &d1; // p2가 가리키는 주소값을 수정불가

	// p2 = d2; -> 수정불가
}