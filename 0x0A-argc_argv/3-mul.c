#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers which are passed
 * as command line arguments.
 *
 * @argc: the argument count, the number of arguments passed.
 * @argv: the argument vector, an array of pointers to the arguments.
 *
 * Return: 1 if argc is not equal to 2. 0 otherwise.
 */

int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		mult = num1 * num2;
		printf("%d\n", mult);
	}

	return (0);
}
