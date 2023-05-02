#include <stdio.h>
#include "lists.h"

/**
 * print_list - function to print a linked list
 * @h: pointer to head of the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{

	size_t size = 0;

	while (h)
	{
		if (h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		size++;
		h = h->next;
	}

	return (size);
}
