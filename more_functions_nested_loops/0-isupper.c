#include "main.h"

/**
 * _isupper - checks if entered character is uppercase returns 1 if true
 *@c: value being checked
 *
 * Return: Always 1 if uppercase, 0 if other character
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
	return (1);
}
else
{
return (0);
}
}
