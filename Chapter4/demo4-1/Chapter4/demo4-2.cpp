// demo4-2.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	/*
	int a[] = { 1, 2, 3, 4, 5,6 ,7 ,8, 0,0 };
	for (int index = 0; index < 10; ++index)
		cout << a[index] << "";
	cout << endl;
	*/
	/* 不推荐用这种方式循环
	for (int index = 0; index <= 9; ++index)
		cout << a[index] << "";
	*/

	// 一维数组的查找
	//int a[] = { 1, 2, 3, 4 };
	//int len = sizeof(a) / sizeof(a[0]); // 得到数组容量
	//for (int index = 0; index < len; ++index) {
	//	if (a[index] == 3)
	//		cout << a[index] << endl;
	//	return index;
	//}

	// 二维数组的访问
	/*int a[2][4] = { {1, 2, 3, 4},{5, 6, 7, 8} };
	for (int row = 0; row < 2; ++row) {
		for (int col = 0; col < 4; ++col) {
			cout << a[row][col] << "";
		}
		cout << endl;
	}*/

	// 创建动态数组Vector
	vector<int> vec = { 1, 2, 3, 4 };
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// 遍历所有元素
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}

	// 在尾部插入一个元素5
	vec.push_back(5);
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// 遍历所有元素
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}

	// 在中间插入元素6
	vec.insert(--vec.end(), 6);
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// 遍历所有元素
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}

	// 在尾部移除一个元素
	vec.pop_back();
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// 遍历所有元素
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}

	// 在任意位置移除一个元素
	vec.erase(vec.end() - 1);
	cout << "size is " << vec.size() << endl;
	cout << "capacity is " << vec.capacity() << endl;
	// 遍历所有元素
	for (int index = 0; index < vec.size(); ++index)
	{
		cout << vec[index] << endl;
	}
    return 0;
}

