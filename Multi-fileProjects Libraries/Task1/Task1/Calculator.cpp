#include "Calculator.h"

int add(int a, int b) {
	return a + b;
};

int sub(int a, int b) {
	return a - b;
};

int mul(int a, int b) {
	return a * b;
};

double divis(int a, int b) {
	return double(a) / double(b);
};

int expon(int a, int b) {
	int result = a;
	for (int i = 1; i < b; i++) {
		result = result * a;
	}

	return result;
}

