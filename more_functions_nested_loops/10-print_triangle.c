#include "main.h"

/**
 * print_triangle - printing a triangle using #
 *@size: value used for spaces in triable
 */
void print_triangle(int size)
{
	int l;
	int r;

	if (l <= 0)
	{
		_putchar('\n');
		return;
	}
	for (l = 0; l <= size; l++)
	{
		if (size <= 0)
		{
			_putchar('0');
			break;
		}
	for (r = size; r >= 1; r--)
	{
		if (r <= l)
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
