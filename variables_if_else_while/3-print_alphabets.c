#include <stdio.h>

/**
 * main - prints both capitalised and lower case alphabets
 *
 * Return: 0 Always (Success)
*/

int main(void)
{
	int i;
	int a;

	for (i = 97; i <= 122; i++)
	{
	putchar(i);
	}
	for (a = 65; a <= 90; a++)
	{
	putchar(a);
	}
	putchar('\n');
	return (0);
}
