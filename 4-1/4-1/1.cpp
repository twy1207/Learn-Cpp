#include <iostream>
#define STR_MAX 100

void main()
{
	char str[STR_MAX];
	char* p_str = &str[0];
	int count = 0;
	std::cout << "Enter the string: ";
	std::cin.getline(str, STR_MAX);
	while (*(p_str + count) != '\0') {
		count++;
	}
	std::cout << "Length of string : " << count << std::endl;
}