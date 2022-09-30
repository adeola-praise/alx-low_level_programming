#include <stdio.h>

/**
 * main - prints the name of the current file.
 *
 * @argc: the argument count that is, total number of arguments.
 * @argv: the argument vector that is, a pointer to an array of pointers.
 *
 * Return: Always 0.
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", argv[0]);

	return(0);
}
