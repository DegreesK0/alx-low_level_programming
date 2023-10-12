#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list
 * @head: pointer to the pointer of the head of the list
 * @index: index of the node to be deleted, starting from 0
 * Return: 1 if succeeded, -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL)
	{
		/* Empty list */
		return (-1);
	}

	if (index == 0)
	{
		/* Delete the first node */
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev = NULL;
		}
		free(current);
		return (1);
	}

	/* Traverse to the node at the specified index */
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		/* Index out of range */
		return (-1);
	}
	/* Update pointers to remove the node at the specified index */
	current->prev->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}
	free(current);
	return (1);
}

