// demo4-3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string.h> // ʹ���ַ������ͷ�ļ�

using namespace std;

int main()
{
	//char strHelloWorld[10] = { "helloworld" };  // �ᱨ��ȱ��һ��Ԫ��`\0`�Ŀռ�
	char strHelloWorld[11] = { "helloworld" };    // ����һ������
	char strHelloWorld2[] = { "helloworld" };
	char* pStrHelloWrold = "helloworld";

	//pStrHelloWrold = strHelloWorld;
	//strHelloWorld = pStrHelloWrold;               // ���������ֵ������ı�

	// �ַ�0, '\0', '0'������
	//char c1 = 0;
	//char c2 = '\0';
	//char c3 = '0';

	// �������
	// ͨ��������������޸������е�Ԫ��ֵ
	//for (int index = 0; index < strlen(strHelloWorld); ++index)
	//{
	//	strHelloWorld[index] += 1;
	//	std::cout << strHelloWorld[index] << std::endl;
	//}
	//// ͨ��ָ����������޸������е�Ԫ��ֵ
	//for (int index = 0; index < strlen(strHelloWorld); ++index)
	//{
	//	pStrHelloWrold[index] += 1;
	//	std::cout << pStrHelloWrold[index] << std::endl;
	//}

	cout << endl;  // ����
	cout << "�ַ�������Ϊ: " << strlen(strHelloWorld) << endl;  // �����ַ�������
	cout << "�ַ���ռ�ÿռ�Ϊ:  " << sizeof(strHelloWorld) << endl;
	
	return 0;
}

