#include "main.h"

/**
 * _strcat - Concatenates two strings.
 *
 * @dest: the destination string.
 * @src: the source string.
 *
 * Return: the contenated string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int len = 0;

	while (dest[i])
	{
		len++;
		i++;
	}

	for (i = 0; src[i]; i++)
	{
		dest[len + i] = src[i];
	}

	return (dest);
}
