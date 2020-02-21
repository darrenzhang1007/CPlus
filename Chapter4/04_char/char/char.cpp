// char.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string.h>                    //使用C库的头文件

using namespace std;
const unsigned int MAX_LEN_NUM = 16;
const unsigned int STR_LEN_NUM = 7;
const unsigned int NUM_TO_COPY = 2;
int main()
{
	/*字符串比较
	char strHelloWorld1[] = { "helloworld" };
	cout << strlen(strHelloWorld1) << endl;
	cout << sizeof(strHelloWorld1) << endl;

	char strHelloWorld2[] = { "helloworld" };
	char strHelloWorld3[] = { "hflloworld" };
	char strHelloWorld4[] = { "hdlloworld" };
	cout << strcmp(strHelloWorld1, strHelloWorld2) << endl;
	cout << strcmp(strHelloWorld1, strHelloWorld3) << endl;
	cout << strcmp(strHelloWorld1, strHelloWorld4) << endl;
	*/

	// 字符串的拷贝 链接操作
	char strHelloWorld1[] = { "hello" };
	char strHelloWorld2[] = { "world" };
	char strHelloWorld3[MAX_LEN_NUM] = { 0 };
	//strcpy(strHelloWorld3, strHelloWorld1);  // 将1的内容copy到3  ->  hello
	strcpy_s(strHelloWorld3, MAX_LEN_NUM, strHelloWorld1);
	//strncpy(strHelloWorld3, strHelloWorld2, NUM_TO_COPY);  // 将第二个的前两个字符copy到3  ->  wollo
	strncpy_s(strHelloWorld3, MAX_LEN_NUM, strHelloWorld2, NUM_TO_COPY);
	//strcat(strHelloWorld3, strHelloWorld2);  // 将2和3链接  -> wolloworld
	strcat_s(strHelloWorld3, MAX_LEN_NUM, strHelloWorld2);
	//unsigned int len = strlen(strHelloWorld3);
	unsigned int len = strnlen_s(strHelloWorld3, MAX_LEN_NUM);
	for (unsigned int index = 0; index < len; ++index) {
		cout << strHelloWorld3[index] << " "; 
	}
	cout << endl;
	//strcat(strHelloWorld2, "Welcome to C++");  // 会造成缓冲区溢出的问题，通过新的API来解决问题
	//strcat_s(strHelloWorld2, STR_LEN_NUM, "Welcome to C++");  // 

    return 0;
}

