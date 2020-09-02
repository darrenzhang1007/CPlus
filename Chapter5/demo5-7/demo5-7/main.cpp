#include <iostream>
using namespace std;

int a = 0; // (GVAR)全局初始化区
int* p1; // (bss)全局未初始化区

int main() { 
	int b = 1; //(stack)栈区变量
	char s[] = "abc"; //(stack)栈区变量
	int* p2 = NULL; //(stack)栈区变量
	char *p3 = "123456"; //123456\0在常亮区，p3在（stack）栈区
	static int c = 0; //(GVAR)全局（静态）初始化区
	
	p1 = new int(10); //(heap)堆区变量
	p2 = new int(20); //(heap)堆区变量
	char* p4 = new char[7]; //(heap)堆区变量
	strcpy_s(p4, 7, "123456"); //(test)代码区

	// (text)代码区
	if (p1 != NULL)
	{
		delete p1;
		p1 = NULL;
	}
	if (p2 != NULL)
	{
		delete p2;
		p2 = NULL;
	}
	if (p4 != NULL)
	{
		delete[] p4;  // 对于数组的删除
		p4 = NULL;
	}
	
	/*
	// 内存泄漏演示
	while (true) {
		int* wp1 = new int(10); // 这样会导致内存一直增加，直到内存爆掉
	}
	*/
	

	return 0; //(test)代码区
}