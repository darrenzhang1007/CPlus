// CPPDemo1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

#include "stdio.h"
// C面向过程的方式
static int noisy = 0;  // 状态信息
static FILE* pFile = NULL;     // 文件指针
void trace(char* s)
{
	if (noisy)
		fprintf(pFile, "%s\n", s);
	if (!pFile) { fclose(pFile);  pFile = NULL; }
}
void trace_on()
{
	noisy = 1;
}
void trace_off()
{
	noisy = 0;
}
// C++面向对象方式
class Trace {
public:
	Trace() { noisy = 1; f = stdout; }
	Trace(FILE* ff) { noisy = 1; f = ff; }
	~Trace()
	{
		noisy = 0;
		if (!f) { fclose(f);  f = NULL; }
	}
	void on() { noisy = 1; }
	void off() { noisy = 0; }
	void trace(char* s) { 
		if (noisy)
		{
			fprintf(f, "%s\n", s);
		}
	}
private:
	int noisy;// 状态信息
	FILE* f;
};

int main()
{
	// C面向过程的方式
	FILE* f0;
	fopen_s(&f0, "cppdemo0.txt", "w");
	pFile = f0;
	trace_on();
	trace("hi1");
	pFile = stdout;
	trace("hi2");
	trace_off();
	pFile = f0;
	trace("hi1");
	pFile = stdout;
	trace("hi2");
	fclose(f0);

	// C++面向对象方式
	FILE* f;
	fopen_s(&f, "cppdemo1.txt", "w");
	Trace t1(f);
	t1.trace("hi1");
	Trace t2;
	t2.trace("hi2");
	t1.off();
	t1.trace("hi1");
	t2.trace("hi2");

	


    return 0;
}

