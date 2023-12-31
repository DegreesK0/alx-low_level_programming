#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - allocs memory to create a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 *
 * Return: a pointer to a 2 dimensional array fo integers
 */

int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int k = 0;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(arr[j]);
			}

			free(arr);
			return (NULL);
		}

		for (k = 0; k < width; k++)
		{
			arr[i][j] = 0;
		}
	}

	return (arr);
}
