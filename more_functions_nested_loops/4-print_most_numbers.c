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
		if (digit == '2' || digit == '4')
		{
			continue;
		}
		digit++;
		_putchar(digit);
	}
_putchar('\n');
}
