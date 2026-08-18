#include "main.h"

/**
 * sqrt_hlp - the algorithm to find square root
 * @num: number being square rooted.
 * @g: the guessed incrementing number
 *
 * Return: result of sqrt number
 */
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

/**
* _sqrt_recursion - finding the square root of n
* @n: number being square rooted
*
* Return: sqr root number
*/
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
