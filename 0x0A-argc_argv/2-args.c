#include <stdio.h>

/**
 * main - prints all the arguments it recieves.
 *
 * @argc: the argument count, the total number of arguments.
 * @argv: the argument vector, an array of pointers to the argument.
 *
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
