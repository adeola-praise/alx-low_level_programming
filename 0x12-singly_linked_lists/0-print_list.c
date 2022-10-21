#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements in a linked list.
 *
 * @h: the head of the linked list
 * Return: the number of nodes in the linked list.
 */

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		count++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (count);
}
