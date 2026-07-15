#include "main.h"
/**
*puts2 - prints every other character
*@str: the value for string
*/
void puts2(char *str)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(s[i]);
		}
		i++;
	}
	_putchar('\n');
}
