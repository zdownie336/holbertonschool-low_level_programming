#include "dog.h"
#include <stddef.h>
/**
* init_dog - the initialising dog struct
* @d: dog's information
* @name: the dog's name
* @age: the dog's age
* @owner: the dog's owner's name
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
