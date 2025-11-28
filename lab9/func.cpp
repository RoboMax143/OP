#include "func.hpp"
#include <cmath>

int f_digit(int a) {
	while (a > 9) a /= 10;
	return a;
}

int l_digit(int a) {
	return a % 10;
}

bool is_Prime(int a) {
	if (a == 1) return false;
	if (a == 2) return true;
	bool flag = true;
	for (int i = 2; i <= sqrt(a); ++i) {
		if (a % i == 0) flag = false;
	}
	return flag;
}

bool is_157(int a) {
	while (a > 0) {
		if (a % 10 == 1 || a % 10 == 5 || a % 10 == 7) {
			return true;
		}
		a /= 10;
	}
	return false;
}

