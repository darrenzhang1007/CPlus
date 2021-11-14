#include <iostream>
#include <memory>

using namespace std;

int main() {
	// shared_ptr
	{
		//shared_ptr ������ǹ�������Ȩ�������shared_ptr ���Թ���ͬһ���ڴ�
		auto wA = shared_ptr<int>(new int(20));
		{
			auto wA2 = wA;
			cout << ((wA2.get() != nullptr) ? (*wA2.get()) : -1) << endl; //20
			cout << ((wA.get() != nullptr) ? (*wA.get()) : -1) << endl;  //20
			cout << wA2.use_count() << endl;  // ���ü�����2
			cout << wA.use_count() << endl;   // 2
		}
		// cout << wA2.use_count() << endl;
		cout << wA.use_count << endl;  // 1
		cout << ((wA.get() != nullptr) ? (*wA.get()) : -1) << endl;  // 20
		// shared_ptr �ڲ����������ü�����ʵ���ڴ���Զ�����ÿ������һ��shared_ptr��
		// ���ü�����+1����һ��shared_ptr �뿪���������ü�����-1��
		// �����ü���Ϊ0��ʱ����delete�ڴ�
	}

	// move �﷨
	auto wAA = std::make_shared<int>(30);
	auto wAA2 = std::move(wAA);  // ��ʱ wAA ���� nullptr�� wAA2.use_count()=1
	cout << ((wAA.get() != nullptr) ? (*wAA.get()) : -1) << endl;    // -1
	cout << ((wAA2.get() != nullptr) ? (*wAA2.get()) : -1) << endl;  // 30
	cout << wAA.use_count() << endl;  // 0
	cout << wAA2.use_count() << endl; // 1
	// ��wAA���� move �� wAA2����ζ�� w �����˶��ڴ������Ȩ�͹�����ʱ wAA �������nullptr
	// ��wAA2����˶�������Ȩ������Ϊ��ʱ wAA �Ѳ��ٳ��ж������ wAA2 �����ü���Ϊ1
	return 0;
}