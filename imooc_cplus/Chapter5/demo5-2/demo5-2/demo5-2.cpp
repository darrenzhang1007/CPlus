// demo5-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	// T*: ע�� * �ڶ���ͼ�ӷ����ϵ�����
	// int i = 4; int* ip = &i; cout << (*ip) << endl;
	// double d = 3.14; double* dp = &d; cout << (*dp) << endl;
	// char c = 'a'; char* cp = &c; cout << (*cp) << endl;

	// array of pointers �� a pointer to an array
	int c[4] = { 0x80000000, 0xFFFFFFFF, 0x00000000, 0x7FFFFFFF };  // 4�ֽ���С������ -1, 0�� 4�ֽ����������
	int*  a[4];  // array of pointers       ָ�������
	int(*b)[4];  // a pointer to an array �����ָ��
	b = &c;      // ע�⣺�������������ƥ��  
	
	// ������c��Ԫ�ظ�������a
	for (unsigned int i = 0; i < 4; i++)
	{
		a[i] = &(c[i]);  // ������c�е�Ԫ�صĵ�ַȡ����ֵ��a
	}
	// ������½��
	cout << *(a[0]) << endl;   // a[0] = 0x80000000�ĵ�ַ  *a(a[0]) = -2147483648
	cout << (*b)[3] << endl;   // (*b) ������ (*b)[3]��0x7FFFFFFF��Ӧ�ĵ�ַ2147483647
    return 0;
}

