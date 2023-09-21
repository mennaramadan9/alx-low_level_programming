#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Prints all elements of a linked list
 * @h: pointer
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
