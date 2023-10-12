#include "lists.h"


/**
 * print_dlistint - prints the elements of a doubly linked lists
 * @h: current position in the linked list
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int num_nodes = 0;

	while (h != NULL)
	{
		printf("%d", h->n);
		printf("\n");
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
