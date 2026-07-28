#include "function_pointers.h"
#include <stddef.h>

/**
* int_index - searching for an integar
* @array: array location
* @size: number in array
* @cmp: function pointer
*
* Return: index of string with 98
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	if (cmp == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i = i + 1;
	}
	return (-1);
}
