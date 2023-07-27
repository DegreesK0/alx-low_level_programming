#include "main.h"
#include <stdio.h>

/**
* reverse_array - reverses the content of an array of integers
* @a: array to be reversed
* @n: the number of elements in the array
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = n - 1;
	int swap = 0;

	for (i = 0; i < n / 2; i++)
	{
		swap = a[j];
		a[j] = a[i];
		a[i] = swap;
		j--;
	}
}


