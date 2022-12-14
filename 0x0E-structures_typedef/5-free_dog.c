#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - that frees dogs.
 * @d: a pointer to a structure.
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
