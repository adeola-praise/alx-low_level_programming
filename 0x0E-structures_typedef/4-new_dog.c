#include <stdio.h>
#include "dog.h"
#include <stdlib.h>


/**
 * new_dog - a function that creates a new dog.
 * @name: the name of the dog.
 * @age: the age of the dog.
 * @owner: the owner of the dog.
 *
 * Return: Null if function fails and pointer to new dog if otherwise.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog1;
	dog_t *ptr = &dog1;

	dog1.name = name;
	dog1.age = age;
	dog1.owner = owner;

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
