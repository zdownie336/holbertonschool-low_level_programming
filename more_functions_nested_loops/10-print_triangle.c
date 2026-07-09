#include "main.h"

/**
 * print_triangle - printing a triangle using #
 *@size: value used for spaces in triable
 */
void print_triangle(int size)
{
	int i;
	int r;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= size; i++)
	{
		if (size <= 0)
		{
			_putchar('0');
			break;
		}
	for (r = size; r >= 1; r--)
	{
		if (r <= i)
		{
			_putchar('#');
		}
		else
		{
			_putchar(' ');
		}
	}
	_putchar('\n');
	}
}
