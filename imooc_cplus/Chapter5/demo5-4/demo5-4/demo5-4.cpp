#include "stdafx.h"
#include <iostream>

using namespace std;

int main()
{
	// ָ���ָ��
	int a = 123;
	int* b = &a;
	int** c = &b;

	// NULLָ���ʹ��
	int* pA = NULL;
	pA = &a;
	if (pA != NULL) // �ж��Ƿ���NULLָ��
		cout << (*pA) << endl;
	pA = NULL; // pA ����ʱ��Ϊ��
    return 0;
}

