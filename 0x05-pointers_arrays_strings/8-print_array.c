#include <stdio.h>

/**
 * prints n elements of an array of integers.
 * @a: the array
 * @n: number of elements.
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i == (n - 1))
		{
			printf("%d", a[i]);
		}
		else
		{
			printf("%d, ", a[i]);
		}
	}
	putchar('\n');
}
