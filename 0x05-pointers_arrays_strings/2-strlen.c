#include "main.h"
#include <stdio.h>

/**
 * _strlen - a function that returns the length of a string.
 * @s: the string whose length would be counted.
 *
 * Return: the length of string s.
 */

int _strlen(char *s)
{
	int sLen = 0;

	while (*s != '\0')
	{
		s++;
		sLen++;
	}

	return (sLen);
}
