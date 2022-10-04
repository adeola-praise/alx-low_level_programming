#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int len = 0;
	int j = 0;
	char *p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	p = malloc(sizeof(char) * len);

	if (p == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		p[j++] = s1[i];

	for (i = 0; s2[i]; i++)
		p[j++] = s2[i];

	return (p);
}
