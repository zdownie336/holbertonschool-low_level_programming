#include "main.h"

/**
 * print_alphabet_x10 - printing the alphabet 10 times
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
int i;
int r;
	for (r = 0; r <= 9; r++)
	{
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
_putchar('\n');
	}
	return (0);
}
