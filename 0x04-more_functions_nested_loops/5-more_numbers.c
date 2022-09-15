#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	int i = 0;
	int j;

	while (i <= 10)
	{
		for (j = 0; j < 15; j++)
		{
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
