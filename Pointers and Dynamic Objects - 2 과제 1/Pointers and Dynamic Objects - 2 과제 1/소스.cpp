#include <iostream>

using namespace std;

/*
void main()
{
	int n;
	cout << "Input total number of elements : ";
	cin >> n; // n 입력받기
	int* p = new int[n]; // n 크기의 배열 할당
	cout << "Random number : ";
	for (int i = 0; i < n; i++)
		cin >> p[i];
	delete[] p; // 할당 없애기
}
*/
#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;

int main()
{
    int n;
    cout << "Input total number of elements: ";
    cin >> n;

    // 동적 메모리 할당
    int* p = new int[n];

    // 랜덤 시드 설정
    srand(static_cast<unsigned int>(time(0)));

    // 랜덤 숫자 생성 및 저장
    for (int i = 0; i < n; i++) {
        p[i] = rand() % 100; // 0~99 사이의 숫자
    }

    // 랜덤 숫자 출력
    cout << "Random numbers: ";
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    // 동적 메모리 해제
    delete[] p;

    return 0;
}