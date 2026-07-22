#include "main.h"
#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: the minimum value
* @max: the maximum value
*
* Return: 0 Always
*/
int *array_range(int min, int max)
{
	int *result;
	int i;
	int size;

	size = max - min + 1;
	if (size < 0)
		size *= -1;

	result = malloc(sizeof(int) * size);

	min = 0;
	max = 10;

	if (min > max)
		return (NULL);

	if (result == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		result[i] = min + i;
		i++;
	}
	return (result);
}
