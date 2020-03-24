#include <iostream>
using namespace std;
#include <math.h>

int main() {
	// aabb的完全平方数
	int n = 0;
	double m = 0;
	
	for (size_t a = 1; a < 10; a++)
	{// for1
		for (size_t b = 0; b < 10; b++)
		{// for 2
			n = a * 1100 + b * 11; //aabb
			m = sqrt(n); // m 是浮点数，如何判断其为整数
			if (m - int(m) < 0.00000001)
			{
				cout << n << endl;
			}
		}// for 2
	}// for1

	int high, low;
	// aabb的完全平方数
	for (size_t index = 31; ; index++)
	{
		n = index*index;
		if (n < 1000)
			continue;   // 继续下一次循环
		if (n > 9999)
			break;        // 退出循环
		high = n / 100;   // 4567/100 = 45
		low = n % 100;   // 4567%100 = 67
		if ((high / 10 == high % 10) && (low / 10 == low % 10))   // 判断aa， bb
		{
			cout << n << endl;
		}
	}

	return 0;
}
