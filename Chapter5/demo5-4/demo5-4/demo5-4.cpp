// demo5-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// 指针的指针
	int a = 123;
	int* b = &a;
	int** c = &b;

	// NULL指针的使用
	int* pA = NULL;
	pA = &a;
	if (pA != NULL) // 判断是否是NULL指针
		cout << (*pA) << endl;
	pA = NULL; // pA 不用时置为零
    return 0;
}

