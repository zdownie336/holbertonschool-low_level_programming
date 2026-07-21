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
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return (dest);
}
