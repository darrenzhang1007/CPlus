#include <iostream>
#include <assert.h>

using namespace std;

// ��дһ����������������int�ͱ��� a, b
// ʵ���ں����ڲ�������������ֵ����
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

// ʵ��һ������������һ����ţ��ж��Ƿ�Ϊ����
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
