#include "main.h"

/**
 * _strncat - Concatenates two strings uing at most
 * an inputed number of bytes from src.
 *
 * @dest: destination string
 * @src: source string.
 * @n: The number of bytes from src to be appended to dest.
 *
 * Return: A pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, len;

	while (dest[i])
	{
		len++;
		i++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[len + i] = src[i];
	}

	return (dest);
}
