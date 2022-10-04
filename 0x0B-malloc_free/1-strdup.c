#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: the string to be duplicated.
 *
 * Return: returns a pointer to a new string which is a
 * duplicate of the string str. NULL if str = NULL,
 * NULL if insufficient memory was available.
 */

char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int len;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		len++;

	p = malloc(sizeof(char) * (len + 1));

	if (p == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		p[i] = str[i];
	}
	p[len] = '\0';

	return (p);
}
