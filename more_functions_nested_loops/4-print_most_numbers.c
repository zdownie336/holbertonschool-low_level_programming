#include "main.h"

/**
 * print_most_numbers - print numbers from 0 to 9, except 2 and 4
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; i++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar(n + '0');
	}
	_putchar('\n');
}
