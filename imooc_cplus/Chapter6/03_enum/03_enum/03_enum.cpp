#include <iostream>
using namespace std;
int main()
{
	enum wT { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday }; // 声明wT类型
	wT weekday;
	weekday = Monday;
	weekday = Tuesday;
	//weekday = 1;             // 不能直接给int值，只能赋值成wT定义好的类型值
	cout << weekday << endl;
	//Monday = 0;             // 类型值不能做左值
	int a = Wednesday;
	cout << a << endl;

	return 0;
}

