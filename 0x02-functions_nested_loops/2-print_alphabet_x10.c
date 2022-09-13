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

	for (no_of_times = 0; no_of_times <= 9; no_of_times++)
	{
		for (alphabets = 97; alphabets < 123; alphabets++)
		{
			_putchar(alphabets);
		}

		_putchar('\n');
	}
}
