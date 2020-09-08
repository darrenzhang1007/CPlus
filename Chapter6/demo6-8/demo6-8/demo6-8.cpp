#include "stdafx.h"


inline int MaxValue(int a, int b)
{
	return (a > b) ? a : b;
}

inline int Fib(int n)
{
	if (n == 0)
	{
		return 0;
	}
	else if (n == 1)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}


int main()
{
	int x = 3, y = 4;
	MaxValue(x, y);

	Fib(5);

    return 0;
}

