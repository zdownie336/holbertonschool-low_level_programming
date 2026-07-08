#include "main.h"
#include <stdio.h>
/**
* _isupper - checks if entered character is uppercase returns 1 if true
*@c: value being checked
*
* Return: 1 if uppercase, 0 if other character
*/
int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
printf("%c: %d\n", c, _isupper(c));
return (1);
}
else
{
printf("%c: %d\n", c, _isupper(c));
return (0);
}
}
