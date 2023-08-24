#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node to the end of the linked list
 * @head: the beginnning of the node?
 * @str: the string in the node
 *
 * Return: returns the new_node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *current;

	if (new_node == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);

	new_node->str = strdup(str);
	/* commented block adds extra protection if str fails */
	/* if (new_node->str == NULL) */
	/* { */
	/*	free(new_node); */
	/*	return (NULL); */
	/* } */
	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
		current->next = new_node;
	}

	return (new_node);
}
