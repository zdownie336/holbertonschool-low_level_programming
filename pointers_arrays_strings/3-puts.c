#include "main.h"
/**
*_puts - used to print a string*
*@str: used for string
**/

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
_putchar('\n');
}
