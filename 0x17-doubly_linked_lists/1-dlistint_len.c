#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: current position in the linked list
 *
 * Return: the number of nodes
 */


size_t dlistint_len(const dlistint_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
