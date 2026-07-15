#include "main.h"

/**
* puts_half - prints the only half of the string
* @str: value for the string
*/

void puts_half(char *str)
{
	int i;
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		i = length / 2;
	}
	else
	{
		i = (length + 1) / 2;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
