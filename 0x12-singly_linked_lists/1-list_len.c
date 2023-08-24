#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked list
 * @h: current position in the linked list
 *
 * Return: the number of nodes
 */

size_t list_len(const list_t *h)
{
	/* struct list_s *current; */
	int num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
