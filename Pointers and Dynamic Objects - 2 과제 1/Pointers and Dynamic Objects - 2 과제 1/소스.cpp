#include <iostream>

using namespace std;

/*
void main()
{
	int n;
	cout << "Input total number of elements : ";
	cin >> n; // n �Է¹ޱ�
	int* p = new int[n]; // n ũ���� �迭 �Ҵ�
	cout << "Random number : ";
	for (int i = 0; i < n; i++)
		cin >> p[i];
	delete[] p; // �Ҵ� ���ֱ�
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

    // ���� �޸� �Ҵ�
    int* p = new int[n];

    // ���� �õ� ����
    srand(static_cast<unsigned int>(time(0)));

    // ���� ���� ���� �� ����
    for (int i = 0; i < n; i++) {
        p[i] = rand() % 100; // 0~99 ������ ����
    }

    // ���� ���� ���
    cout << "Random numbers: ";
    for (int i = 0; i < n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;

    // ���� �޸� ����
    delete[] p;

    return 0;
}