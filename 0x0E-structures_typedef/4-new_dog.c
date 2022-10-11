#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *strcopy (char *src, char *dest);

dog_t *new_dog(char *name, float age, char *owner)
{
	char *namecpy;
	char *ownercpy;
	int namelen, ownerlen;
	dog_t *ptr;

	namelen = _strlen(name) + 1;
	ownerlen = _strlen(owner) + 1;

	ptr = malloc(sizeof(dog_t));
	namecpy = malloc(sizeof(char) * namelen);
	ownercpy = malloc(sizeof(char) * ownerlen);

	ptr->name = malloc(sizeof(char) * namelen);
	ptr->owner = malloc(sizeof(char) * ownerlen);	

	strcopy(name, namecpy);
	strcopy(owner, ownercpy);

	(*ptr).name = name;
	(*ptr).age = age;
	(*ptr).owner = owner;

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	if ((*ptr).name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	if (ptr->owner == NULL)
	{
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}

	return (ptr);	
}

int _strlen(char *str)
{
	int i = 0;
	int len = 0;
	
	for(i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	return (len);
}

char *strcopy (char *src, char *dest)
{
	int i = 0;
	
	for(i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
