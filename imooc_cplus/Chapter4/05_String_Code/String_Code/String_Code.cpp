#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	/* ========== 1. �ַ������� ========== */
	string s1;  //������ַ���
	string s2 = "helloworld";  //���岢��ʼ��
	string s3("helloworld");
	string s4 = string("helloworld");

	/* ======== 2. ��ȡ�ַ������� ======== */
	cout << s1.length() << endl;
	cout << s1.size() << endl;
	cout << s1.capacity() << endl;

	/* ========== 3. �ַ����Ƚ� ========== */
	s1 = "hello", s2 = "world";
	cout << (s1 == s2) << endl;
	cout << (s1 != s2) << endl;

	/* ===== 4. ת����C�����ַ��� ====== */
	const char *c_str1 = s1.c_str();
	cout << "The C-style string c_str1 is: " << c_str1 << endl;
	
	/* ======== 5. �ַ���������� ======= */
	for (unsigned int index = 0; index < s1.length(); ++index) {
		cout << c_str1[index] << " ";
	}
	cout << endl;

	for (unsigned int index = 0; index < s1.length(); ++index) {
		cout << s1[index] << " ";
	}
	cout << endl;

	/* ========== 6. �ַ������� ========== */
	s1 = "helloworld";
	s2 = s1;
	cout << s2 << endl;

	/* ========== 6. �ַ������� ========== */
	s1 = "hello", s2 = "world";
	s3 = s1 + s2;  // s3: helloworld
	cout << s3 << endl;
	s1 += s2;      // s1: helloworld
	cout << s1 << endl;

	return 0;
}

