#include <iostream>
#include <assert.h>

using namespace std;

// 编写一个函数，输入两个int型变量 a, b
// 实现在函数内部将两个变量的值互换
void swap(int& a, int& b) {
	int tmp = a;
	a = b;
	b = tmp;
}

void swap2(int* a, int* b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

// 实现一个函数：输入一个年号，判断是否为闰年
bool isLeapYear(int& yearNum) {
	//if(yearNum %400 == 0 || (yearNum % 4 == 0 && yearNum % 100 != 0)){
	if((yearNum % 4 == 0 &&yearNum % 100 != 0) || (yearNum % 400 == 0)){
		printf("%d is leap year...\n", yearNum);
		return true;
	}
	else
	{
		printf("%d is not leap year...\n", yearNum);
		return false;
	}
}

int main(){
	//int x = 1, x2 = 3;
	//int& rx = x;
	//rx = 2;
	//cout << x << endl; // 2
	//cout << rx << endl; //2
	//rx = x2;
	//cout << x << endl; //3
	//cout << rx << endl; // 3

	//int a = 3, b = 4;
	//swap(a, b);
	//assert(a == 4 && b == 3);
	//a = 3, b = 4;
	//swap2(&a, &b);
	//assert(a == 4 && b == 3);
	int a = 2020;
	isLeapYear(a);
	return 0;
}
