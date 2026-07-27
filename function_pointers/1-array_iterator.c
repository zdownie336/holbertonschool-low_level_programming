#include <stddef.h>
#include "function_pointers.h"

/**
* array_iterator - iterates the array and it's variables
* @array: array's address
* @size: struct for the size of array
* @action: function pointer
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i = i + 1;
	}
}

