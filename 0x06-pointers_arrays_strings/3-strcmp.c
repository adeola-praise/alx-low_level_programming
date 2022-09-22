#include "main.h"

/**
 * _strcmp - Compares two strings.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: 0 if the same, 1 if s1 is greater than s2,
 * -1 if s2 is greater than s1.
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;
	int val1 = 0, val2 = 0;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			val1 = s1[i];
			val2 = s2[i];
			j = 1;
			break;
		}
	}

	if (j == 0)
	{
		return (0);
	}
	else
	{
		if (val1 > val2)
			return (1);
		else
			return (-1);
	}
}
