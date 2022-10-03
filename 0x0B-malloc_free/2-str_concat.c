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
	int len1, len2;
	char *p;

	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	p = malloc(sizeof(char) * (len1 + len2 + 1));

	for (i = 0; s1[i] != '\0'; i++)
		p[i] = s1[i];

	for (i = 0; s2[i] != '\0'; i++)
		p[len1 + i] = s2[i];

	p[len1 + len2 + 1] = '\0';

	return (p);
}
