// 智能指针
#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char **argv)
{
    // shared_ptr
    int a = 6;
    shared_ptr<int> p1 = make_shared<int>(a);
    cout << "p1: " << *p1 << endl;

    shared_ptr<int> p2(p1);
    cout << "p1 and p2 address: " << p1 << ", " << p2 << endl;
    int *p3 = p1.get();
    cout << "p1 raw pointer: " << *p3 << endl;
    cout << "p1 use count: " << p1.use_count() << endl;

    // unique_ptr
    unique_ptr<int> p5(new int);
    *p5 = 9;
    cout << "*p5 is " << *p5 << endl;

    int *p4 = p5.get();
    *p4 = 4;

    cout << "*p4 is " << *p4 << endl;
    cout << "*p5 is " << *p5 << endl;

    unique_ptr<int> p6 = move(p5); // 转移所有权
    // cout << "*p5" << *p5 << endl; // 段错误 (核心已转储)
    cout << "*p6 is " << *p6 << endl;

    p6.release();
    // cout << "p6" << *p6 << endl; // 段错误 (核心已转储)

    // weak_ptr
    shared_ptr<int> p7 = make_shared<int>(a);
    weak_ptr<int> wp1(p7);
    cout << "p7 use count: " << p7.use_count() << endl;
    cout << "p7 use count(wp1): " << wp1.use_count() << endl;
    // cout << "*wp1 is " << *wp1 << endl; // error: 没有与这些操作数匹配的 "*" 运算符

    if (!wp1.expired())
    {
        shared_ptr<int> p8 = wp1.lock();
        cout << "p7 use count: " << p7.use_count() << endl;
    }

    return 0;
}