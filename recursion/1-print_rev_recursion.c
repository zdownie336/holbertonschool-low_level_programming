#include "main.h"

void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*s == '\0')
		return;
	
	_print_rev_recursion(&s[i + 1]);
	_putchar(s[i]);

}
