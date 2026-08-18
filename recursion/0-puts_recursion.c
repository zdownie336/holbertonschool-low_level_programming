#include "main.h"

/**
* _puts_recursion - printing a string using recursion;
* @s: string
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(&s[i + 1]);
}
