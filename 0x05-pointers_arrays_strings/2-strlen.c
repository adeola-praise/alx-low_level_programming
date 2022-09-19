#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string whose length would be counted.
 *
 * Return: the length of string s.
 */

int _strlen(char *s)
{
	int sLen;

	while (*s != '\0')
	{
		sLen++;
		s++;
	}

	return (sLen);
}
