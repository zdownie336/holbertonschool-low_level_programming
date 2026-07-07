#include "main.h"

/**
* print_sign - prints sign of a number and if it's less than 0
*@n: checks if sign is positive, negative or 0
*
* Return: 1 and '+' if grater than 0, 0,0 if zero, -1 '-' if less than 0
*/
int print_sign(int n)
{

	if (n > 0)
	{
		_puchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar(-);
		return (-1);
	}
}
