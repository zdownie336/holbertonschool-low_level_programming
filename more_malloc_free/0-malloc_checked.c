#include <stdlib.h>
#include "main.h"

/**
* malloc_checked - alocating memory and printing the address
* @b: used to return the pointers
*
* Return: pinter to string or 98 if failed
*/

void *malloc_checked(unsigned int b)
{
	void *array;

	array = malloc(b);

	if (array == NULL)
	{
		exit(98);
	}
	return (array);
}
