#include "main.h"

/**
* _strcat - concat two strings together
* @dest: where the concat string goes to.
* @src: the source of the string
*
* Return: the concatted string
*/

char *_strcat(char *dest, char *src)
{
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (*src != '\0')
	{
		dest[i] = *src;
		i++;
		src++;
	}
	dest[i] = '\0';

	return (dest);
}
