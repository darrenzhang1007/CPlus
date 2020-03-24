// 08_function.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <iostream>

using namespace std;

int MaxValue(int x, int y)
{
	return (x > y) ? x : y;
}
int MinValue(int x, int y)
{
	return (x < y) ? x : y;
}
int Add(int x, int y)
{
	return x + y;
}
bool ProcessNum(int x, int y, int(*p)(int a, int b))
{
	cout << p(x, y) << endl;
	return true;
}

int main()
{
	int x = 10, y = 20;
	cout << ProcessNum(x, y, MaxValue) << endl;
	cout << ProcessNum(x, y, MinValue) << endl;
	cout << ProcessNum(x, y, Add) << endl;

	return 0;
}
