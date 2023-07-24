#include "main.h"
#include <stdio.h>

/**
* print_array - prints n elements of an array of integers
* @a: the array
* @n: the number of elements to print
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf("\n");
}
