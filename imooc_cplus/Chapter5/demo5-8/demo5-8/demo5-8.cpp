// demo5-8.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <memory>
using namespace std;

int main() {
	{// ȷ��auto_ptrʧЧ�ķ�Χ�����˴����ţ���ʧЧ��
		// ��intʹ��
		auto_ptr<int> pI(new int(10)); // ���ͱ��
		cout << *pI << endl;           // 10 

		// auto_ptr	C++ 17���Ƴ� ӵ���ϸ��������Ȩ���������ָ��
		// auto_ptrԭ���ڿ��� / ��ֵ�����У�ֱ�Ӱ���ԭ������ڴ�Ŀ���Ȩ��ת�����¶���
		// Ȼ���ٽ�ԭ����ָ����Ϊnullptr�����ڣ�NULL������������Ҳ�й���Ȩת�ơ�
		// ����ȱ�㲻�Զ������������ٴ�ȥ����ԭ����ʱ������ͻᱨ������auto_ptr����˵ʵ�ֵĲ��ã�
		// �ܶ���ҵ�������Ҳ��Ҫ��׼ʹ��auto_ptr��
		auto_ptr<string> languages[5] = {
			auto_ptr<string>(new string("C")),
			auto_ptr<string>(new string("Java")),
			auto_ptr<string>(new string("C++")),
			auto_ptr<string>(new string("Python")),
			auto_ptr<string>(new string("Rust"))
		};
		cout << "There are some computer languages here first time: \n";
		for (int i = 0; i < 5; ++i)
		{
			cout << *languages[i] << endl;
		}
		auto_ptr<string> pC;
		pC = languages[2]; // languges[2] loses ownership. ������Ȩ��languges[2]ת�ø�pC��
						   // ��ʱlanguges[2]�������ø��ַ����Ӷ���ɿ�ָ��
		cout << "There are some computer languages here second time: \n";
		for (int i = 0; i < 2; ++i)
		{
			cout << *languages[i] << endl;
		}
		cout << "The winner is " << *pC << endl; // ��C++���Ƹ���pC
		cout << "There are some computer languages here third time: \n";
		for (int i = 0; i < 5; ++i) {
			cout << *languages[i] << endl;
		}
		
	}
	return 0;
}