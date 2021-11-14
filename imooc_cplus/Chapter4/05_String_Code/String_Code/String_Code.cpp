#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	/* ========== 1. 字符串定义 ========== */
	string s1;  //定义空字符串
	string s2 = "helloworld";  //定义并初始化
	string s3("helloworld");
	string s4 = string("helloworld");

	/* ======== 2. 获取字符串长度 ======== */
	cout << s1.length() << endl;
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;

	/* ========== 3. 字符串比较 ========== */
	s1 = "hello", s2 = "world";
	cout << (s1 == s2) << endl;
	cout << (s1 != s2) << endl;

	/* ===== 4. 转换成C风格的字符串 ====== */
	const char *c_str1 = s1.c_str();
	cout << "The C-style string c_str1 is: " << c_str1 << endl;
	
	/* ======== 5. 字符串随机访问 ======= */
	for (unsigned int index = 0; index < s1.length(); ++index) {
		cout << c_str1[index] << " ";
	}
	cout << endl;

	for (unsigned int index = 0; index < s1.length(); ++index) {
		cout << s1[index] << " ";
	}
	cout << endl;

	/* ========== 6. 字符串拷贝 ========== */
	s1 = "helloworld";
	s2 = s1;
	cout << s2 << endl;

	/* ========== 6. 字符串连接 ========== */
	s1 = "hello", s2 = "world";
	s3 = s1 + s2;  // s3: helloworld
	cout << s3 << endl;
	s1 += s2;      // s1: helloworld
	cout << s1 << endl;

	return 0;
}

