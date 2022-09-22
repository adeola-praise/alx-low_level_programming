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
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		dest++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}

	return (dest);
}
