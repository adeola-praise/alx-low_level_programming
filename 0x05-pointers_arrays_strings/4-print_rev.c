#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: the string
 * Return: void
 */

void print_rev(char *s)
{
	int len;
	int i;
	
	while (*s != '\0')
	{
		s++;
		len++;
	}

	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
