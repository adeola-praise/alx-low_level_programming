#include "main.h"

/**
 * main - Print the word "_putchar"
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char str[9] = "_putchar";
	int i;
	
	for(i = 0; i <= 9; i++)
	{
		_putchar(str[i]);
	}	
	_putchar("\n");

	return (0);
}