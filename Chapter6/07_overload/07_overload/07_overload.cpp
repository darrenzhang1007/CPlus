// demo6-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

//?test@@YAHH@Z 
//?test@@YAHN@Z 
//?test@@YAHHN@Z
int main()
{
	int(*p)(int);
	p = test;
	int result = (*p)(1);

	result = quickzhao::test(1);

	result = test(2.0);
	result = test(1, 2.0);
	return 0;
}