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
	while (str[srclength] != '\0')
	{
		srclength++;
	}

	dest = malloc(sizeof(char) * (srclength + 1));
	if (dest == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < srclength)
	{
		dest[i] = str[i];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
* new_dog - new doggo's information
* @name: name of the dog
* @age: age of the pupper
* @owner: who owns the doggo
*
* Return: New doggo's information
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *dog_name;
	char *dog_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	dog_name = copy(name);
	if (dog_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->name = dog_name;
	new_dog->age = age;

	dog_owner = copy(owner);
	if (dog_owner == NULL)
	{
		free(new_dog);
		free(dog_name);
		return (NULL);
	}

	new_dog->owner = dog_owner;
	return (new_dog);
}
