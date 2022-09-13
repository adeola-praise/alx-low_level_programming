#include "main.h"

/**
 * print_alphabet_x10 - Print the alphabet in lowercase ten times.
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int alphabets;
	int no_of_times;

	while (no_of_times < 11)
	{
		for (alphabets = 97; alphabets < 123; alphabets++)
		{
			_putchar(alphabets);
		}

		no_of_times++;
		_putchar('\n');
	}
}
