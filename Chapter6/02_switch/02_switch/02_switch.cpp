#include <iostream>
using namespace std;

typedef enum __COLOR
{
	RED,
	GREEN,
	BLUE,
	UNKOWN
}COLOR;

int main() {
	// 多分支条件的switch
	// switch,case,default
	COLOR color1;
	color1 = GREEN;
	int c1 = 0;
	switch (color1) {

	case RED: {
		cout << "red" << endl;
		c1 += 1;
		break;
	}

	case GREEN: {
		cout << "green" << endl; 
		c1 += 2;
		break;
	}
	case BLUE: {
		cout << "blue" << endl;
		c1 += 3;
		break;
	}
	default: {
		cout << "unknown color" << endl;
		c1 += 0;
		break;
	}
	}
	return 0;
}