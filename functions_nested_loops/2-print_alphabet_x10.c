#include "main.h"

/**
 * print_alphabet_x10 - printing the alphabet 10 times
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
int i;
int count = 10;
	while (count > 0)
	{
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
count--;
	}
	_putchar('\n');
	return (0);
}
