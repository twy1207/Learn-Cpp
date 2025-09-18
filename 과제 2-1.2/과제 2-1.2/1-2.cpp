#include "box.h" // 헤더파일 

void main()
{
	// 11줄 출력
	for (int i = 1; i <= 6; i++) { // 6줄 순차적으로 출력하고 나머지 5줄 반대로 출력
		print((13 - (2 * i + 1)) / 2, ' ');
		if (i > 1) {
			print(1, '*');
			print(2 * i - 3, ' ');
			print(1, '*');
		} else print(1, '*'); // i == 1 일 때 '*' 1개만 출력, ' '은 X
		print((13 - (2 * i + 1)) / 2, ' ');
		cout << endl;
	}
	for (int i = 5; i >= 1; i--) { // 나머지 5줄 반대로 출력
		print((13 - (2 * i + 1)) / 2, ' ');
		if (i > 1) {
			print(1, '*');
			print(2 * i - 3, ' ');
			print(1, '*');
		}
		else print(1, '*');
		print((13 - (2 * i + 1)) / 2, ' ');
		if(i > 1) cout << endl;
	}
}