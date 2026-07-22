#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: the minimum value
* @max: the maximum value
*
* Return: address of the memory allocated
*/
int *array_range(int min, int max)
{
	int *result;
	int i;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	size = max - min + 1;
	if (size < 0)
		size *= -1;

	result = malloc(sizeof(int) * size);

	if (result == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}

	return (result);
}
