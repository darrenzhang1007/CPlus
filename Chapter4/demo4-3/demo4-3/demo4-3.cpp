// demo4-3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string.h> // 使用字符串库的头文件

using namespace std;

int main()
{
	//char strHelloWorld[10] = { "helloworld" };  // 会报错，缺少一个元素`\0`的空间
	char strHelloWorld[11] = { "helloworld" };    // 定义一个数组
	char strHelloWorld2[] = { "helloworld" };
	char* pStrHelloWrold = "helloworld";

	//pStrHelloWrold = strHelloWorld;
	//strHelloWorld = pStrHelloWrold;               // 数组变量的值不允许改变

	// 字符0, '\0', '0'的区别
	//char c1 = 0;
	//char c2 = '\0';
	//char c3 = '0';

	// 数组操作
	// 通过数组变量遍历修改数组中的元素值
	//for (int index = 0; index < strlen(strHelloWorld); ++index)
	//{
	//	strHelloWorld[index] += 1;
	//	std::cout << strHelloWorld[index] << std::endl;
	//}
	//// 通过指针变量遍历修改数组中的元素值
	//for (int index = 0; index < strlen(strHelloWorld); ++index)
	//{
	//	pStrHelloWrold[index] += 1;
	//	std::cout << pStrHelloWrold[index] << std::endl;
	//}

	cout << endl;  // 换行
	cout << "字符串长度为: " << strlen(strHelloWorld) << endl;  // 计算字符串长度
	cout << "字符串占用空间为:  " << sizeof(strHelloWorld) << endl;
	
	return 0;
}

