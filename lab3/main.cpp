#include <iostream>;

int main() {
	// var 1

	int x;
	int i;
	std::cin >> x >> i;
	std::cout << (x | (1 << i)) << std::endl;

	return 0;
};