#include <iostream>

void makeArray(int** arr, int size)
{
	//int** arr = &myArray;
	//arr == myArray�� �ּ�
	//*arr == myArray(�����ͺ���)
	*arr = new int[size]; //arr = new int* [size]; -> �������迭
	for (int i = 0; i < size; i++) {
		(*arr)[i] = i + 1;
	}
}
int main() 
{
	int* myArray = nullptr;
	makeArray(&myArray, 5); // mrArray = �����ͺ���, �����ͺ���(�ּҰ�)�� �ּҰ� == int** arr

	std::cout << "array value : ";
		for (int i = 0; i < 5; i++) {
			std::cout << myArray[i] << " ";
		}
	std::cout << std::endl;
	// TODO : �޸� ����
	delete[] myArray;
	return 0;
}