#include "main.h"

/**
 * print_line - prints 'n' equal to number provided
 * @n: printed number for '_'
 */

void print_line(int n)
{
	int row;

	for (row = 1; row <= n; row++)
	{
		if (n <= 0)
		{
			break;
		}
	_putchar('_');
}
_putchar('\n');
}
