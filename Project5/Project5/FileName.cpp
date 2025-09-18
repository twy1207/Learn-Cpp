#include <iostream>
/*
int volume(int h, int w, int l) { return h * w * l; }
void main() 
{
	const int height = 3, width = 5, length = 7;
	std::cout << "Volume is " << volume(height, width, length) << std::endl;	std::cout << "Volume is " << volume(9, 4, 3) << std::endl;}*/int get_area(int h, int w = 10, int l = 10) { return 2 * (h * w + w * l + l * h); }
void main() {
	std::cout << "The area is " << get_area(3) << std::endl;
	std::cout << "The area is " << get_area(3, 11, 12) << std::endl;
}
// get_area(3)  get_area(3,10,10)
// get_area(3, 5)  get_area(3,5,10)