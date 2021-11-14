#include <string>
#include <iostream>
#include <memory>

using namespace std;

struct B;
struct A {
	shared_ptr<B> pb;
	~A() {
		cout << "~A()" << endl;
	}
};
struct B {
	shared_ptr<A> pa;
	~B() {
		cout << "~B()" << endl;
	}
};

// pa �� pb ������ѭ�����ã����� shared_ptr ���ü���ԭ��pa �� pb ���޷��������ͷ�
// weak_ptr Ϊ�˽�� shared_ptr ˫�����õ�����
struct BW;
struct AW
{
	shared_ptr<BW> pb;
	~AW() {
		cout << "~AW()" << endl;
	}

};
struct BW
{
	weak_ptr<AW> pa;
	~BW() {
		cout << "~BW()" << endl;
	}
};

void Test(){
	cout << "Test shared_ptr and shared_ptr" << endl;
	shared_ptr<A> tA(new A());
	shared_ptr<B> tB(new B());
	cout << tA.use_count() << endl;
	cout << tB.use_count() << endl;
	tA->pb = tB;
	tB->pa = tA;
	cout << tA.use_count() << endl;  // 2
	cout << tB.use_count() << endl;  // 2
}

void Test2() {
	cout << "Test weak_ptr and shared_ptr" << endl;
	shared_ptr<AW> tA(new AW());
	shared_ptr<BW> tB(new BW());
	cout << tA.use_count() << endl;  // 1
	cout << tB.use_count() << endl;  // 1
	tA->pb = tB;
	tB->pa = tA; 
	cout << tA.use_count() << endl;  // 1
	cout << tB.use_count() << endl;  // 2
}

int main() {
	Test();
	Test2();
	return 0;
}