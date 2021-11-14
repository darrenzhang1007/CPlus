#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*==== off by one error(��һ����)չʾ====*/
	//int a[] = { 1, 2, 3, 4, 5,6 ,7 ,8, 0,0 };
	//for (int index = 0; index < 10; ++index)
	//	cout << a[index] << "";
	//cout << endl;

	//// ���Ƽ������ַ�ʽѭ��
	//for (int index = 0; index <= 9; ++index)
	//	cout << a[index] << "";

	/*==== ����Ԫ�ص���ɾ�Ĳ� ====*/
	// һά����Ĳ���
	//int a[] = { 1, 2, 3, 4 };
	//int len = sizeof(a) / sizeof(a[0]); // �õ���������
	//for (int index = 0; index < len; ++index) {
	//	if (a[index] == 3)
	//		cout << a[index] << endl;
	//	return index;
	//}

	// ��ά����ķ���
	//int a[2][4] = { {1, 2, 3, 4}, {5, 6, 7, 8} };
	//for (int row = 0; row < 2; ++row) {
	//	for (int col = 0; col < 4; ++col) {
	//		cout << a[row][col] << "";
	//	}
	//	cout << endl;
	//}

	/*==== ��̬������� ====*/
	// 1.������̬����Vector
	vector<int> vec = { 1, 2, 3, 4 };
	cout << "size is " << vec.size() << endl;          // 4
	cout << "capacity is " << vec.capacity() << endl;  // 4
	// ��������Ԫ��
	for (int index = 0; index < vec.size(); ++index) {
		cout << vec[index] << endl;  // 1 2 3 4
	}

	// 2.��β������һ��Ԫ��5
	vec.push_back(5);  
	cout << "size is " << vec.size() << endl;          // 5
	cout << "capacity is " << vec.capacity() << endl;  // 6
	// ��������Ԫ��
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;   // 1 2 3 4 5
	}

	// 3.���м����Ԫ��6
	vec.insert(--vec.end(), 6);
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// ��������Ԫ��
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}

	// 4.��β���Ƴ�һ��Ԫ��
	vec.pop_back();
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// ��������Ԫ��
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}

	// 5.������λ���Ƴ�һ��Ԫ��
	vec.erase(vec.end() - 1);
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// ��������Ԫ��
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}
    return 0;
}

