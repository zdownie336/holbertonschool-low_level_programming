#include "main.h"

/**
 * print_most_variables - printing everything besides 2 and 4
 *
 */

void print_most_numbers(void)
{
int digit;
digit = '0';
	while (digit <= '9')
	{
		digit++;

		if (digit == '2' || digit == '4')
		{
			continue;
		}
		_putchar(digit + '0');
	}
_putchar('\n');
}
