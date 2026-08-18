#include "main.h"

/**
* factorial - the factorial result of n
* @n: number with factorial
*
* Return: factorial number
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
