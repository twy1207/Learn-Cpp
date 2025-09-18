#include "box.h" // 헤더파일 

void main()
{
	for (int i = 1; i <= 5; i++) { // 5줄 출력
		print((11 - (2 * i - 1)) / 2, ' ');
		print(2 * i - 1, '*');
		print((11 - (2 * i - 1)) / 2, ' ');
		if (i != 5) cout << endl;
	}
}