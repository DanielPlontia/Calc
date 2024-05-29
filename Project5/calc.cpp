#include <string>

int getDivide(int a, int b) {
	if (b == 0) {
		throw std::string("You cannot divide by zero");
	}
	return a / b;
}