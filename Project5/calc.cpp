#include <iostream>
#include <string>
using namespace std;

class Calc {
public:
    int getGop(int a, int b) {
        return a * b;
    }

    int getMinus(int a, int b) {
        return a - b;
    }

    int getSum(int a, int b) {
        return a + b;
    }

    int getGop(int a, int b) {
        return a * b;
    }

	int getDivide(int a, int b) {
		if (b == 0) {
			throw string("You cannot divide by zero");
		}
		return a / b;
	}
};
