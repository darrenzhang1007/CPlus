#include <iostream>
using namespace std;

int main() {
	char ch = 'a';
	char* cp = &ch;

	//++ -- ²Ù×÷·û
	char* cp2 = ++cp;
	char* cp3 = cp++;
	char* cp4 = --cp;
	char* cp5 = cp--;

	// ++ ×óÖµ
	// ++cp2 = 97;
	// cp2++ = 97;

	// *++ ++*
	*++cp2 = 98;
	char ch3 = *++cp2;
	*cp2++ = 98;
	char ch4 = *cp2++;

	// ++++ ---- 
	int a = 1, b = 2, c, d;
	// c = a++b;
	c = a++ + b;
	// d = a++++b;
	char ch5 = ++*++cp;

	return 0;
}
