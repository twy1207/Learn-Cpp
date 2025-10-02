#include <iostream>

void printMean(int* grades, int n)
{
	double sum = 0.0;
	for (int i = 0; i < n; i++) {
		sum += grades[i];
	}
	std::cout << sum / n << std::endl; // 점수 합을 학생 수로 나눈 값 출력
}

void main() 
{
	int n;
	std::cout << "How many students ? ";
	std::cin >> n;
	int* grades = new int[n];
	for (int i = 0; i < n; i++) {
		int mark;
		std::cout << "Input Grade for Student" << (i + 1) << "? : ";
		std::cin >> mark;
		grades[i] = mark;
	}
	printMean(grades, n); // call a function with dynamic array
}