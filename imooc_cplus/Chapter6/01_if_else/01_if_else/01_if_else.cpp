#include <iostream>
#include <assert.h>

using namespace std;

// ʵ��һ������������һ����ţ��ж��Ƿ�Ϊ����
bool isLeapYear(int& yearNum) {
	//if(yearNum %400 == 0 || (yearNum % 4 == 0 && yearNum % 100 != 0)){
	if ((yearNum % 4 == 0 && yearNum % 100 != 0) || (yearNum % 400 == 0)) {
		printf("%d is leap year...\n", yearNum);
		return true;
	}
	else
	{
		printf("%d is not leap year...\n", yearNum);
		return false;
	}
}

// �ж�һ�������Ƿ�Ϊ��һ�������ı���
void isTimes(int& a, int& b) {
	if ((a != 0) && a % b == 0) {
		cout << "a��b�ı���" << endl;
	}
	else
	{
		cout << "a����b�ı���" << endl;
	}
}

typedef enum __COLOR
{
	RED,
	GREEN,
	BLUE,
	UNKOWN
}COLOR;


int main() {
	//int a = 2020;
	//isLeapYear(a);
	//int b = 4;
	//isTimes(a, b);
	
	// ���֧������if
	// if, else if, else
	COLOR color0;
	color0 = BLUE;
	int c0 = 0;
	if (color0 == RED) {
		cout << "red" << endl; 
		c0 += 1;
	}
	else if (color0 == GREEN) {
		cout << "green" << endl; 
		c0 += 2;
	}
	else if (color0 == BLUE) {
		cout << "blue" << endl;
		c0 += 3;
	}
	else {
		cout << "unknown color" << endl; 
		c0 += 0;
	}
	return 0;
}
