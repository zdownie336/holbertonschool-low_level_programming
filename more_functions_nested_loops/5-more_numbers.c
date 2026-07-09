#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14, 10 times
 */

void more_numbers(void)
{
	int num;
	int row;

	for (row = 1; row <= 10; row++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + '0');
			}
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
