#include "main.h"
#include <stdlib.h>
/**
* _calloc - allocated memory for an array.
* @nmemb: the array
* @size: the byte size of the array
*
* Return: memory address or NULL if failed
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *result;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	result = malloc(nmemb * size);

	if (result == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < nmemb * size)
	{
		((char *)result)[i] = 0;
		i++;
	}
	return (result);
}
