include "main.h"

/**
 *  _abs - Computes the absolute value of an integer.
 *
 *  @n - the integer to be worked with.
 *
 *  Return: absolute value.
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);

	_putchar('\n');
}
