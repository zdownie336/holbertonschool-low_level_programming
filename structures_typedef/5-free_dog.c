#include <stddef.h>
#include "dog.h"
#include <stdlib.h>

/**
* free_dog - freeing the memory allocated to doggo
* @d: the made struct
*/

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return (NULL);
	}

	free(d->name);
	free(d->age);
	free(d);
}
