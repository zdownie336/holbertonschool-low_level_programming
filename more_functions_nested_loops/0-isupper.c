#include "main.h"
/**
* _isupper - checks if entered character is uppercase returns 1 if true
*@c: input char
*
* Return: 1 if uppercase, 0 if other character
*/
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
