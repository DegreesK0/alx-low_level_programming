#include "main.h"
#include <stdio.h>

/**
* print_diagsums - prints the sum of the two diagonals
*	of a square matrix of integers
* @a: the matrix
* @size: the size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int diag1 = 0;
	int diag2 = 0;

	for (i = 0; i < (size * size); i += size + 1)
		diag1 += a[i];

	for (j = size; j < (size * size); j += size - 1)
		diag2 += a[j];

	printf("%d, %d\n", diag1, diag2);

}

