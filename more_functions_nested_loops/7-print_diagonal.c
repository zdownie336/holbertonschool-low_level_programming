#include "main.h"

/**
 * print_diagonal - print diagonal line with width and height of n
 * @n: width and height of diagonal line
 */

void print_diagonal(int n)
{
	int space;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (space = 1; space <= n; space++)
	{
		if (n <= 0)
		{
			_putchar('0');
			break;
		}

		for (j = 1; j <= n; j++)
		{
			if (j <= space)
			{
				if (j == space)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
