#include <stdlib.h>

/**
* _strdup - make a new copy of the string in a new address
* @str: the origin of the string
*
* Return: pointer to the duplicated string or NULL if failed
*/

char *_strdup(char *str)
{
	char *char_array;
	int i;
	int size;

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	size = 0;
	while (str[i] != '\0')
	{
		size++;
		i++;
	}

	char_array = malloc(size + 1);

	if (char_array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (str[i] != '\0')
	{
		char_array[i] = str[i];
		i++;
	}
	return (char_array);
}
