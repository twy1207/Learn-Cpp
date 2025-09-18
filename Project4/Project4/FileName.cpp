#include "box.h"
int main()
{
	Box box;
	box.height = 3; box.width = 5; box.length = 7;
	box.print();
	return 0;
}
/*
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	ifstream fs_1("a.txt");
	ofstream fs_2("b.txt");
	std::fstream out_fs("test.txt", std::fstream::out);
	int i;
	fs_1 >> i;
	fs_2 << "Programming Methdology" << std::endl;
	out_fs << "is easy";
	if(fs_1.is_open())
		std::cout << i << std::endl;
	else
		std::cout << "File is not found" << std::endl;
	fs_1.close(); fs_2.close(); out_fs.close();
	return 0;
}*/