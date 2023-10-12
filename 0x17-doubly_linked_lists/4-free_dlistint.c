#include "lists.h"


/**
 * free_dlistint - frees the linked_list
 * @head: the position in the linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}

}
