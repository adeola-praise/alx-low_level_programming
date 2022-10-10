#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog.
 * @d: a pointer to a variable of type struct dog.
 * @name: a pointer to the name of the dog
 * @age: the age of the dog
 * @owner: a pointer to the owner of the dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *ptr = d;

	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;
}
