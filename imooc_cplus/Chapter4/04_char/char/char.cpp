// char.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string.h>                    //ʹ��C���ͷ�ļ�

using namespace std;
const unsigned int MAX_LEN_NUM = 16;
const unsigned int STR_LEN_NUM = 7;
const unsigned int NUM_TO_COPY = 2;
int main()
{
	/* ============ �ַ����Ƚ� ============ */
	//char strHelloWorld1[] = { "helloworld" };
	//cout << strlen(strHelloWorld1) << endl;
	//cout << sizeof(strHelloWorld1) << endl;

	//char strHelloWorld2[] = { "helloworld" };
	//char strHelloWorld3[] = { "hflloworld" };
	//char strHelloWorld4[] = { "hdlloworld" };
	//cout << strcmp(strHelloWorld1, strHelloWorld2) << endl;
	//cout << strcmp(strHelloWorld1, strHelloWorld3) << endl;
	//cout << strcmp(strHelloWorld1, strHelloWorld4) << endl;

	/* ======= �ַ����Ŀ��������Ӳ��� ===== */
	char strHelloWorld1[] = { "hello" };
	char strHelloWorld2[] = { "world" };
	char strHelloWorld3[MAX_LEN_NUM] = { 0 };
	//strcpy(strHelloWorld3, strHelloWorld1);  // ��1������copy��3  ->  hello
	strcpy_s(strHelloWorld3, MAX_LEN_NUM, strHelloWorld1);
	//strncpy(strHelloWorld3, strHelloWorld2, NUM_TO_COPY);  // ���ڶ�����ǰ�����ַ�copy��3  ->  wollo
	strncpy_s(strHelloWorld3, MAX_LEN_NUM, strHelloWorld2, NUM_TO_COPY);
	//strcat(strHelloWorld3, strHelloWorld2);  // ��2��3����  -> wolloworld
	strcat_s(strHelloWorld3, MAX_LEN_NUM, strHelloWorld2);
	//unsigned int len = strlen(strHelloWorld3);

	unsigned int len = strnlen_s(strHelloWorld3, MAX_LEN_NUM);
	for (unsigned int index = 0; index < len; ++index) {
		cout << strHelloWorld3[index] << " "; 
	}
	cout << endl;

	/* ========== �ַ�����ƴ�Ӳ��� ======== */
	//strcat(strHelloWorld2, "Welcome to C++++++++++++++++++++++++++++++++++");  // ����ɻ�������������⣬���ܻ�۸ı�ı�����ֵ��ͨ���µ�API���������
	strcat_s(strHelloWorld2, STR_LEN_NUM, "Welcome to C++");  // 

    return 0;
}

