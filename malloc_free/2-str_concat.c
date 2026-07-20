#include <stdlib.h>

/**
* _strlength - finding the length of the string
* @str: the string
*
* Return: string's length
*/

int _strlength(char *str)
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
* str_concat - concat two strings together to new address
* @s1: string one
* @s2: string two
*
* Return: new catted string or NULL on failure
*/

char *str_concat(char *s1, char *s2)
{
	char *char_array;
	int i;
	int size;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;

	size = _strlength(s1) + _strlength(s2);

	char_array = malloc(size + 1);

	if (char_array == NULL)
	{
		return (NULL);
	}

	while (*s1 != '\0')
	{
		char_array[i] = *s1;
		s1++;
		i++;
	}

	while (*s2 != '\0')
	{
		char_array[i] = *s2;
		s2++;
		i++;
	}

	char_array[i] = '\0';
	return (char_array);
}
