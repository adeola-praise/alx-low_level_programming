#include "main.h"

/**i
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 *
 * Return: void
 */

void print_alphabet(void)
{
	int i;

	for (ch = 97; ch < '123; ch++)
	{
		_putchar(ch);
	}

	_putchar('\n');
}
