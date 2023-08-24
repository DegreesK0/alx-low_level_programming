#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees the linked_list
 * @head: the position in the linked list
 */

void free_list(list_t *head)
{
	list_t *position = head;
	list_t *next;

	while (position != NULL)
	{
		next = position->next;
		free(position->str);
		free(position);
		position = next;
	}

}
