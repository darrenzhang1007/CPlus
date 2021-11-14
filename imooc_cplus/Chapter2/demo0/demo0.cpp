// 本代码作用：使用断点调试工具，对变量地址进行监视，
// 并且查看不同的数据类型占用字节多少

#include "stdafx.h"

void  main(void)
{
	char a[10] = "a"; // 10 bytes
	short int s = 97;
	int m = 97;
	long int n = 97;
	float f = 97.0f;
	double d = 97.0;
	long double k = 97.0;
	bool b = true;
	wchar_t w[10] = L"a";  // 20 bytes
	// wchar_t:每个字符占用2bytes
	// char：每个字符占用1bytes
}

