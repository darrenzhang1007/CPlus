// stdafx.cpp : ֻ������׼�����ļ���Դ�ļ�
// 07_overload.pch ����ΪԤ����ͷ
// stdafx.obj ������Ԥ����������Ϣ

#include "stdafx.h"

// TODO: �� STDAFX.H �������κ�����ĸ���ͷ�ļ���
//�������ڴ��ļ�������
int test(int a)
{
	return a;
}
namespace quickzhao
{
	int test(int a)
	{
		return a + 1;
	}
}
int test(double a)
{
	return int(a);
}
int test(int a, double b)
{
	return a + b;
}