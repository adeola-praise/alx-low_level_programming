#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 *
 * @a: the array.
 * @n: the number of elements of the array.
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = 0;

	for (i = 0; i < n/2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 -i] = j;
	}
}
