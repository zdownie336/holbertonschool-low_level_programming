#include "main.h"

/**
* print_last_digit - displays the last digit of a number
* @n: value displaying last digit
*
* Return: Always 0
*/
int print_last_digit(int n)
{
	int l
		l = n % 10;
	if (l < 0)
	{
		l *= -1;
	}
	_putchar(l +'0');

	return (l);
}
