#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: current position in the linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	/* struct list_s *current; */
	int num_nodes = 0;

	while (h != NULL)
	{
		printf("[%d] ", h->len);
		if (h->str == NULL)
			printf("(nil)");
		else
			printf("%s", h->str);
		printf("\n");
		num_nodes++;
		h = h->next;
	}

	return (num_nodes);
}
