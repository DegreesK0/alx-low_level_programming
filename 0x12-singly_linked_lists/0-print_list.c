#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a linked list
 * @h: current position in the linked list
 *
 * Return: the number of nodes
 */

/* size_t print_list(const list_t *h) */
/* { */
/* 	/1* struct list_s *current; *1/ */
/* 	int num_nodes = 0; */

/* 	while (h != NULL) */
/* 	{ */
/* 		printf("[%d] ", h->len); */
/* 		if (h->str == NULL) */
/* 			printf("(nil) "); */
/* 		else */
/* 			printf("%s", h->str); */
/* 		printf("\n"); */
/* 		num_nodes++; */
/* 		h = h->next; */
/* 	} */

/* 	return (num_nodes); */
/* } */


size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h != NULL && h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		if (h->str == NULL)
			printf("[0] (nil)\n");
		count++;
		h = h->next;
	}
	return (count);
}





