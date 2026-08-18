#include "main.h"

/**
* _pow_recursion - finding the power of x to y
* @x: numerator
* @y: the power
*
* Return: powered number.
*/

int _pow_recursion(int x, int y)
{

	if (y < 0)
	{
		return (-1);
	}

	if (y == 0)
	{
		return (1);
	}

	return (x * _pow_recursion(x, y - 1));
}
