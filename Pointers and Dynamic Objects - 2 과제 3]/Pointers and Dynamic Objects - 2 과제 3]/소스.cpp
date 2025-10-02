#include <iostream>

void makeArray(int** arr, int size)
{
	//int** arr = &myArray;
	//arr == myArray의 주소
	//*arr == myArray(포인터변수)
	*arr = new int[size]; //arr = new int* [size]; -> 이차원배열
	for (int i = 0; i < size; i++) {
		(*arr)[i] = i + 1;
	}
}
int main() 
{
	int* myArray = nullptr;
	makeArray(&myArray, 5); // mrArray = 포인터변수, 포인터변수(주소값)의 주소값 == int** arr

	std::cout << "array value : ";
		for (int i = 0; i < 5; i++) {
			std::cout << myArray[i] << " ";
		}
	std::cout << std::endl;
	// TODO : 메모리 해제
	delete[] myArray;
	return 0;
}