#include <iostream>
#include <vector>
#include "remove.hpp"


int main() {
	
	
	int n;
	std::cin >> n;

	std::vector<int> vec(n);
	for (int i = 0; i < n; ++i) {
		vec[i] = i + 1;
	}
	
	removeFirst(vec);



	

	for (int i = 0; i < vec.size(); ++i) {
		std::cout << vec[i] << std::endl;
	}

	if(vec.empty()) std::cout << 0 << std::endl;
	

	/*
	size_t size;
	std::cin >> size;
	int* a = new int[size];
	
	for (size_t i = 0; i < size; ++i) {
		a[i] = i + 1;
	}
	

	std::size_t newSize = size-1;

	int* pol = removeFirst(a, size, newSize);
	
	
	
	for (int i = 0; i < newSize; ++i) {
		std::cout << pol[i] << std::endl;
	}

	delete[] a;
	delete[] pol;
	
	
	*/
}