#include "stdafx.h"

#include <memory>
#include <iostream>
using namespace std;
int main() {
	{// 在这个范围之外，unique_ptr被释放
		auto i = unique_ptr<int>(new int(10)); // auto可以自动检测数据类型
		cout << *i << endl;
	}

	// unique_ptr
	auto w = std::make_unique<int>(10);
	cout << *(w.get()) << endl; // 10
	// auto w2 = w; // 编译错误如果想要把 w 复制给 w2, 是不可以的。
	// 因为复制从语义上来说，两个对象将共享同一块内存。

	// unique_ptr 只支持移动语义, 即如下
	auto w2 = std::move(w); // w2获得内存所有权，w此时等于 nullptr
	cout << ((w.get() != nullptr) ? (*w.get()) : -1) << endl;     // -1
	cout << ((w2.get() != nullptr) ? (*w2.get()) : -1) << endl;   // 10
	return 0;
}