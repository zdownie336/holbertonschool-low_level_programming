#include "main.h"
/**
 * print_square - printing the # into a square
 *@size: value for the sixe of square
 */

void print_square(int size)
{
	int b;
	int c;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (b = 1; b <= size; b++)
	{
		if (size <= 0)
		{
			_putchar('0');
			break;
		}
		for (c = 1; c <= size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
