#include <iostream>

int main() {
	
	// 1 var, task 1:

	float x;
	float y;
	float p;
	std::cin >> x >> y >> p;
	std::cout << ((x + y/100) * (1+(p / 100))) << std::endl;
	

	/*
	// task 2:
	
	float a;
	float b;
	std::cin >> a >> b;
	std::cout << (pow((pow(a, 2) + pow(b, 2)),0.5)) << std::endl;
	*/

	return 0;
};