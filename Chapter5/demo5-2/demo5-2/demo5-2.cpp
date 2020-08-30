// demo5-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	// T*: 注意 * 在定义和间接访问上的作用
	// int i = 4; int* ip = &i; cout << (*ip) << endl;
	// double d = 3.14; double* dp = &d; cout << (*dp) << endl;
	// char c = 'a'; char* cp = &c; cout << (*cp) << endl;

	// array of pointers 和 a pointer to an array
	int c[4] = { 0x80000000, 0xFFFFFFFF, 0x00000000, 0x7FFFFFFF };  // 4字节最小整数， -1, 0， 4字节中最大整数
	int*  a[4];  // array of pointers       指针的数组
	int(*b)[4];  // a pointer to an array 数组的指针
	b = &c;      // 注意：这里数组个数得匹配  
	
	// 将数组c中元素赋给数组a
	for (unsigned int i = 0; i < 4; i++)
	{
		a[i] = &(c[i]);  // 将数组c中的元素的地址取出赋值给a
	}
	// 输出看下结果
	cout << *(a[0]) << endl;   // a[0] = 0x80000000的地址  *a(a[0]) = -2147483648
	cout << (*b)[3] << endl;   // (*b) 是数组 (*b)[3]是0x7FFFFFFF对应的地址2147483647
    return 0;
}

