#include "main.h"

/**
 * int _islower - checks for lowercase character
 *
 * @c: the character to be checked
 *
 * Return: 1 if the character is lowercase. 0 otherwise.
 */

int _islower(int c)
{
	if ((c > 96) && (c < 123))
		return (1);
	else
		return (0);

	_putchar('\n');
}
