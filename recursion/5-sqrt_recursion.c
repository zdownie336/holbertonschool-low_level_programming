#include "main.h"

int sqrt_hlp(int num, int g)
{
	if (g * g == num)
		return (g);

	if (g * g > num)
	{
		return (-1);
	}

	return (sqrt_hlp(num, g + 1));
}


int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	if (n == 1)
	{
		return (n);
	}

	return (sqrt_hlp(n, 0));
}
