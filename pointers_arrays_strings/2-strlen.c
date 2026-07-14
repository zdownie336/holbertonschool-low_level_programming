#include "main.h"

/**
* _strlen - length of a string
* @s: value for the string's length
*
* Return length of the string;
*/

int _strlen(char *s)
{
int i;
int length;

i = 0;
length = 0;
while (s[i] != '\0')
{
length++;
i++;
}
return (length);
}
