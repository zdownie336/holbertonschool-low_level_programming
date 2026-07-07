#include <stdio.h>

/**
 * main - printing lowercase alphabet without 'q' and 'e'
 *
 * Return: 0 Always (success)
 */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
	if (i == 101 || i == 113)
	{
		continue;
	}
	putchar(i);
	}
	putchar('\n');
	return (0);
}
