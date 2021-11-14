// demo5-3.cpp : 定义控制台应用程序的入口点。
#include "stdafx.h"
#include <iostream>

using namespace std;
unsigned int MAX_LEN = 11;

int main()
{
	char strHelloworld[] = { "helloworld" };
	// char const*  == const char*  两者等价

	char const* pStr1 = "helloworld";        // const char*
	// const修饰的是char，修饰的字符串的内容。所以指针本身是允许改变的，
	// 指针指向的内容（地址）是可变的，但是存储的内容是不可变的
	
	char* const pStr2 = strHelloworld;
	// const修饰的是指针，指针的指向是不能发生改变的。
	
	char const* const pStr3 = "helloworld";  // const char* const
	// pStr3指向的地址不允许改变，指向的地址空间中的内容也不能改变
	
	pStr1 = strHelloworld;
	//pStr2 = strHelloworld;                 // pStr2不可改
	//pStr3 = strHelloworld;                 // pStr3不可改

	unsigned int len = strnlen_s(pStr2, MAX_LEN);
	cout << len << endl;
	for (unsigned int index = 0; index < len; ++index) {
		//pStr1[index] += 1;                // pStr1里的值不可改
		pStr2[index] += 1;
		//pStr3[index] += 1;                // pStr3里的值不可改
	}

	return 0;
}