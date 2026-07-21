#include "main.h"

/**
 * _strncat - combines both strings and assigns it to dest until index n
 * @src: first string
 * @dest: second string and the output of the concatination
 * @n: index
 *
 * Return: the concatinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
