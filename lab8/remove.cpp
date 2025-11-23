#include <vector>
#include "remove.hpp"

void removeFirst(std::vector<int>& v) {
	if (!(v.empty())) {
		v.erase(v.begin());
	}
}


int* removeFirst(const int* arr, size_t size, size_t& newSize) {

	if (size == 0) {
		newSize = 0;
		return nullptr;
	}
	
	int* new_a = new int[newSize];

	for (int i = 0; i < newSize; ++i) {
		new_a[i] = arr[i + 1];
	}

	return new_a;
}