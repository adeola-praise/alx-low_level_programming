#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 *
 * @argc: the argument count, that is the number of arguments.
 * @argv: the argument vector, that is the array
 * of pointers to the argument.
 *
 * Return: Always 0.
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
