#include <iostream>
using namespace std;

int a = 0; // (GVAR)ȫ�ֳ�ʼ����
int* p1; // (bss)ȫ��δ��ʼ����

int main() { 
	int b = 1; //(stack)ջ������
	char s[] = "abc"; //(stack)ջ������
	int* p2 = NULL; //(stack)ջ������
	char *p3 = "123456"; //123456\0�ڳ�������p3�ڣ�stack��ջ��
	static int c = 0; //(GVAR)ȫ�֣���̬����ʼ����
	
	p1 = new int(10); //(heap)��������
	p2 = new int(20); //(heap)��������
	char* p4 = new char[7]; //(heap)��������
	strcpy_s(p4, 7, "123456"); //(test)������

	// (text)������
	if (p1 != NULL)
	{
		delete p1;
		p1 = NULL;
	}
	if (p2 != NULL)
	{
		delete p2;
		p2 = NULL;
	}
	if (p4 != NULL)
	{
		delete[] p4;  // ���������ɾ��
		p4 = NULL;
	}
	
	/*
	// �ڴ�й©��ʾ
	while (true) {
		int* wp1 = new int(10); // �����ᵼ���ڴ�һֱ���ӣ�ֱ���ڴ汬��
	}
	*/
	

	return 0; //(test)������
}