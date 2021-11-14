#pragma pack(1)

#include <string.h>
#include <iostream>
using namespace std;

int main()
{
	union Score
	{
		double ds; 
		char level; // double char使用同一内存空间
	};
	struct Student
	{
		char name[6];
		int age;
		Score s;
	};
	//cout << sizeof(Score) << endl;      // 8

	Student s1;
	strcpy_s(s1.name, "lili");
	s1.age = 16;
	s1.s.ds = 95.5;
	s1.s.level = 'A';

	cout << sizeof(Student) << endl;    // 24     18 
	
	return 0;
}