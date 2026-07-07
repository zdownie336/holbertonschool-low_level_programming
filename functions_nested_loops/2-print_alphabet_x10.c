#include "main.h"

/**
 * print_alphabet_x10 - printing the alphabet 10 times
 *
 * Return: Always 0.
 */
int print_alphabet_x10(void)
{
int i;
int iterations = 10;
	while (iterations > 0)
	{
	for (i = 97; i <= 122; i++)
	{
		_putchar(1);
	}
iterations--;
	}
	_putchar('\n');
	return (0);
}
