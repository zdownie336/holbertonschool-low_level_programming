#include "main.h"

/**
* _isdigit - diplays if character is an digit or character
*@c: value for integer
*
* Return: 1 if entered is digit, 0 if otherwise
*/
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
	return (1);
}
else
{
	return (0);
}
}
