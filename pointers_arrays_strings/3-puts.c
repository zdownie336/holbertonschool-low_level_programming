#include "main.h"
/**
* _puts - used to print a string
* _putchar - used to display the string
*@str: the string being printed
*
* Return: string
*/

void _puts(char *str)
{
int i;

i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
_putchar('\n');
}
