// 运算符表达式和基本语句

#include "stdafx.h"
# include <assert.h>
# include <iostream>

using namespace std; // 命名空间

// 二进制转无符号整型
unsigned int B2U(unsigned int num)
{
	return (unsigned int)(num);
}

// 二进制转有符号整型
int B2T(int num)
{
	return (int)(num);
}


int main()
{
	int A = 10;
	int B = 20;

	/*======== 算术运算符示例代码 ========*/
	//std::cout << A + B << std::endl;    // 30
	//cout << A - B << endl;     // -10
	//cout << A * B << endl;     // 200
	//cout << B / A << endl;     // 2
	//cout << 15 / A << endl;    // 1
	//cout << 15.0 / A << endl;  // 1.5
	//cout << B % A << endl;     // 0
	//cout << ++A << endl;       // 11
	//cout << A << endl;         // 11
	//cout << --A << endl;       // 10
	//cout << A << endl;         // 10


	/*======== 关系运算符示例代码 ========*/
	//cout << (A == B) << endl;  // 0
	//cout << (A != B) << endl;  // 1
	//cout << (A > B) << endl;   // 0
	//cout << (A < B) << endl;   // 1
	//cout << (A >= B) << endl;  // 0
	//cout << (A <= B) << endl;  // 1


	/*======== 逻辑运算符示例代码 ========*/
	//bool bA = false, bB = true;
	//// to be or not to be, that`s a question.
	//cout << ( bA == true || bA != true ) << endl;  // 1
	//cout << (bB == true || bB != true) << endl;    // 1

	//// 德·摩根率
	//assert( !(bA || bB) == (!bA && !bB) );  //  1
	//assert( !(bA && bB) == (!bA || !bB) ); //  1

	//bA = false, bB = false;
	//assert( !(bA || bB) == (!bA && !bB) );  //  1
	//assert( !(bA && bB) == (!bA || !bB) );  //  1
	//bA = true, bB = true;
	//assert( !(bA || bB) == (!bA && !bB) );  //  1
	//assert( !(bA && bB) == (!bA || !bB) );  //  1
	//bA = true, bB = false;
	//assert( !(bA || bB) == (!bA && !bB) );  //  1
	//assert( !(bA && bB) == (!bA || !bB) );  //  1

	/*======== 赋值运算符示例代码 ========*/
	//int C = A + B;
	//cout << C << endl;  // 30
	//C += A;
	//cout << C << endl;  // 40
	//C -= A;
	//cout << C << endl;  // 30
	//C *= A;  
	//cout << C << endl;  // 300
	//C /= A;
	//cout << C << endl;  // 30
	//C %= A;
	//cout << C << endl;  // 0 
	//C <<= A;
	//cout << C << endl;  // 0 
	//C >>= A;
	//cout << C << endl;  // 0 
	//C &= A;
	//cout << C << endl;  // 0 
	//C ^= A;
	//cout << C << endl;  // 10 
	//C |= A;
	//cout << C << endl;  // 10 

	/*======== 位运算示例代码 ========*/
	//cout << (A&B) << endl;      //  01010 & 10100  = 00000  ==> 0

	//cout << (A|B) << endl;    //  01010 | 10100  = 11110  ==> 30

	//cout << (A^B) << endl;      //  01010 ^ 10100  = 11110 ==> 30

	//cout << (~A) << endl;       //  ~0000000000001010 = 11111111111110101   ==> 0000000000001011 ==》 -11

	//cout << (A << 2) << endl;   // 00001010 << 2 ==> 00101000‬ ==> 40

	//cout << (A >> 2) << endl;   // 00001010 >> 2 ==> 00000010 ==> 2


	/*======== 杂项运算符示例代码 ========*/
	cout << sizeof(A) << endl;   // 4

	int C = A > B ? 1 : 0;  // 条件运算符
	cout << C << endl;           // 0
	int D = A < B ? 1 : 0;
	cout << D << endl;           // 1

	int E = (A, B, C);  // 取C的结果
	cout << E << endl;           // 0
	float F = float(E);
	cout << F << endl;           // 0
	cout << &F << endl;          // 0xFFXXX

	float * P = &F;  // 定义指针
	cout << P << endl;           // 0xFFXXX
	cout << *P << endl;          // 0

	// 自定义类型和结构
	typedef struct {
		short Sunday = 0;
		short Monday = 1;
		short Tuesday = 2;
		short Wednesday = 3;
		short Thursday = 4;
		short Friday = 5;
		short Saturday = 6;
	} Week;

	Week w;
	cout << w.Friday << endl;  // 5
	cout << sizeof(w.Sunday) << endl;  // 2
	cout << sizeof(w) << endl; // 14

	/*======== 补码示例代码 ========*/

	//  补码机器数调整展示
	//int i1 = 0;
	//int i2 = -1;
	//int i3 = -2147483648;
	//int i4 = 2147483647;

	//unsigned int  u1 = 0;
	//unsigned int  u2 = 4294967295;
	//unsigned int  u3 = 2147483648;
	//unsigned int  u4 = 2147483647;

	// 补码的真值验证
	/*cout << B2T(0x00000000) << endl;
	cout << B2T(0xFFFFFFFF) << endl;
	cout << B2T(0x80000000) << endl;
	cout << B2T(0x7FFFFFFF) << endl;
	cout << endl;
	cout << B2U(0x00000000) << endl;
	cout << B2U(0xFFFFFFFF) << endl;
	cout << B2U(0x80000000) << endl;
	cout << B2U(0x7FFFFFFF) << endl;*/

	// homework_test
	//cout << sizeof(char) << endl;
	//cout << sizeof(short) << endl;
	//cout << sizeof(int) << endl;
	//cout << sizeof(float) << endl;
	//cout << sizeof(double) << endl;

	//int x, y, z, a;
	//a = (x = 10, y = 20, z = x + y);
	//cout << a << endl;

	return 0;
}

