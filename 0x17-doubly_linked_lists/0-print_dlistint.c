#include "lists.h"


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
