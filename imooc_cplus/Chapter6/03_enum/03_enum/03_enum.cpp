#include <iostream>
using namespace std;
int main()
{
	enum wT { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday }; // ����wT����
	wT weekday;
	weekday = Monday;
	weekday = Tuesday;
	//weekday = 1;             // ����ֱ�Ӹ�intֵ��ֻ�ܸ�ֵ��wT����õ�����ֵ
	cout << weekday << endl;
	//Monday = 0;             // ����ֵ��������ֵ
	int a = Wednesday;
	cout << a << endl;

	return 0;
}

