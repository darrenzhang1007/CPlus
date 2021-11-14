// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO:  在此处引用程序需要的其他头文件
int test(int a);
int test(double a);
int test(int a = 1, double b = 2.0);

namespace quickzhao
{
	int test(int a);
}