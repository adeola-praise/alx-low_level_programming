#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *strcopy (char *src, char *dest);

/**
 * new_dog - creates a new dog.
 * @name: the name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: a pointer to a struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen, ownerlen;
	dog_t *ptr;

	namelen = _strlen(name) + 1;
	ownerlen = _strlen(owner) + 1;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->name = malloc(sizeof(char) * namelen);
	ptr->owner = malloc(sizeof(char) * ownerlen);	

	if ((*ptr).name == NULL)
	{
		free(ptr->name);
		free(ptr);
		return (NULL);
	}

	if (ptr->owner == NULL)
	{	
		free(ptr->name);
		free(ptr->owner);
		free(ptr);
		return (NULL);
	}

	strcopy(name, ptr->name);
	strcopy(owner, ptr->owner);

	return (ptr);	
}

/**
 * _strlen - find the length of the string.
 * @str: the string.
 * 
 * Return: the length of the string.
 */

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

/**
 * strcopy - copies a string.
 * @src: the source
 * @dest: the destination.
 *
 * Return: the copied string.
 */

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
