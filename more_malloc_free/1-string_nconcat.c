#include "main.h"
#include <stdlib.h>

/**
* _strlength - finding the length of the string
* @str: the string
*
* Return: string's length
*/

unsigned int _strlength(char *str)
{
	int length;
	int i;

	length = 0;
	i = 0;
	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	return (length);
}

/**
* string_nconcat - concatenating two strings together
* @s1: string one
* @s2: string two
* @n: number of bytes the second string concats.
*
* Return: concat string otherwise NULL
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *catstr;
	unsigned int size;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";
	i = 0;
	if (n < _strlength(s2))
	{
		n = _strlength(s2);
	}

	size = _strlength(s1) + n;
	catstr = malloc(size + 1);

	if (catstr == NULL)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		catstr[i] = *s1;
		s1++;
		i++;
	}
	j = 0;
	while (*s2 != '\0' && j < n)
	{
		catstr[i] = *s2;
		s2++;
		i++;
		j++;
	}
	catstr[i] = '\0';
	return (catstr);
}
