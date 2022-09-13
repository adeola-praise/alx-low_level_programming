#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number.
 *
 * @n: the number to be worked with
 *
 * Return: the last digit of n.
 */

int print_last_digit(int n)
{
	int l;

	l = n % 10;

	if (l < 0)
	{
		_putchar(-l + 48);
		return (-1);
	}
	else
	{
		_putchar(l + 48);
		return (1);
	}
}
