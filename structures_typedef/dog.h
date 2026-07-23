#ifndef DOG_H
#define DOG_H
/**
 * struct dog - information for the dog
 * @name: dog's name
 * @age: age of the dog
 * @owner: dog owner's name
 *
 * Description: the dog has a name, owner and age.
 */
struct dog
{
char *name;
float age;
char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
*new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

