#include <iostream>

int main() {
	/*
	double a = 3.14159;
	double* pa = &a;

	double* pd = pa+2;

	std::cout << &pa << std::endl;
	std::cout << &pd << std::endl;

	std::cout << &pd - &pa << std::endl;

	std::cout << *pa << std::endl;
	std::cout << *pd << std::endl;
	*/


	char* pl = new char[8];

	std::cout << *pl << std::endl;
	

	*pl = 'A';
	*(pl + 1) = 'B';
	*(pl + 2) = 'C';
	*(pl + 3) = 'D';
	*(pl + 4) = 'E';
	*(pl + 5) = 'F';
	*(pl + 6) = 'G';
	*(pl + 7) = 'H';
	
	for (int i = 0; i < 8; ++i) {
		std::cout << *(pl+i) << std::endl;
	}
	
	std::cout << pl << std::endl;

	delete[] pl;
}