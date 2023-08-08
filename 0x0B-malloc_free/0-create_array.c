#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* create_array - creates an array of chars and initializes with a specific char
* @size: size of the array
* @c: character to initialize with
*
* Return: NULL if size = 0 or a pointer to the array
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *arr;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(c) * size);
	if (arr == NULL)
	{
		printf("Can't allocate %lu bytes (after %i calls)\n", sizeof(arr), i);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	free(arr);

	return (arr);
}


