// demo6-9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <assert.h>

#include <iostream>

int g_a[1000]; // ȫ�ֵ����飬��¼쳲��������е�ǰ1000��ֵ

// 쳲��������е�ʵ��
// ����һ���ݹ�
int Fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}
// β�ݹ�
int Fib2(int n, int ret0,  int ret1)
{
	if (n == 0)
	{
		return ret0;
	}
	else if (n == 1)
	{
		return ret1;
	}
	return Fib2(n - 1, ret1, ret0 + ret1);
}
// ѭ��
int Fib3(int n)
{
	if (n < 2)
	{
		return n;
	}
	int n0 = 0, n1 = 1;
	int temp;
	for (int i = 2; i <= n; i++)
	{
		temp = n0;
		n0 = n1;
		n1 = temp + n1;
	}
	return n1;
}
// ��̬�滮
int Fib4(int n)
{
	//assert(n >= 0);
	g_a[0] = 0;
	g_a[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		if (g_a[i] == 0)
		{
			g_a[i] = g_a[i - 1] + g_a[i - 2];
		}
	}
	return g_a[n];
}


int main()
{
	//Fib(10);
	//std::cout  << Fib2(10, 0, 1);
	//std::cout << Fib(20) << std::endl;
	//std::cout << Fib2(20, 0, 1) << std::endl;
	//std::cout << Fib3(20) << std::endl;
	//std::cout << Fib4(20) << std::endl;
	assert(Fib(10) == 55);
	assert(Fib2(10, 0, 1) == 55);
	assert(Fib3(10) == 55);
	assert(Fib4(10) == 55);

    return 0;
}

