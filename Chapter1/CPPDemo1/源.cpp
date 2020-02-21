#include "stdafx.h"
#include <iostream>
using namespace std;

#define MA(X) X*(X-1)

void main() {
	int a = 1, b = 2;
	int c = 0;
	int d = 0;
	d = (1 + a + b)*(1 + a + b - 1);
	c = MA(1 + a + b);
	std::cout << MA(1 + a + b) << std::endl;
	system("pause");
}