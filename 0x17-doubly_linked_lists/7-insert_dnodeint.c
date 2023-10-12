#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the pointer of the head of the list
 * @idx: index of the list where the new node should be added, starting from 0
 * @n: data to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *h;
	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		/* Insert at the beginning */
		new_node->prev = NULL;
		new_node->next = temp;
		if (temp != NULL)
			temp->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}

	if (temp == NULL)
	{
		/* Index out of range */
		free(new_node);
		return (NULL);
	}

	/* Insert at the specified index */
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;

	return (new_node);
}

