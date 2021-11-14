#include "stdafx.h"

#include <memory>
#include <iostream>
using namespace std;
int main() {
	{// �������Χ֮�⣬unique_ptr���ͷ�
		auto i = unique_ptr<int>(new int(10)); // auto�����Զ������������
		cout << *i << endl;
	}

	// unique_ptr
	auto w = std::make_unique<int>(10);
	cout << *(w.get()) << endl; // 10
	// auto w2 = w; // ������������Ҫ�� w ���Ƹ� w2, �ǲ����Եġ�
	// ��Ϊ���ƴ���������˵���������󽫹���ͬһ���ڴ档

	// unique_ptr ֻ֧���ƶ�����, ������
	auto w2 = std::move(w); // w2����ڴ�����Ȩ��w��ʱ���� nullptr
	cout << ((w.get() != nullptr) ? (*w.get()) : -1) << endl;     // -1
	cout << ((w2.get() != nullptr) ? (*w2.get()) : -1) << endl;   // 10
	return 0;
}