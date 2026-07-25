#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
* copy - copying the string to the new location
* @str: the string
*
* Return: pointer to copying string
*/

char *copy(char *str)
{
	char *dest;
	int srclength;
	int i;

	srclength = 0;
	while (src[srclength] != '\0')
	{
		srclength++;
	}

	dest = malloc(sizeof(char) * (srclength + 1));
	if (dest == NULL)
	{
		retunr NULL;
	}

	i = 0;
	while (i < srclength)
	{
		dest[i] = src[i]
		i++;
	}

	dest[i] = '\0';

	return (dest);
}


dog_t *new_dog(char *name, float age, char *owner);
{
	dog_t *new_dog;
	char *dog_name;
	char *dog_owner;

	if (dog_name == NULL || dog_owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	dog_name = copier(name);
	if (dog_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = dog_name;
	new_dog->age = age;

	dog_owner = copier(owner);
	if (dog_owner == NULL)
	{
		free(new_dog);
		free(dog_name);
		return (NULL);
	}

	new_dog->owner = dog_owner;
	return (new_dog);
}
