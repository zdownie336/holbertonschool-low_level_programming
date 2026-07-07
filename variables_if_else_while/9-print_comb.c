#include <stdio.h>
/**
 * main - printing 0 - 9 with ',' in between
 *
 * Return: 0 Always
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
		{
			break;
		}
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
