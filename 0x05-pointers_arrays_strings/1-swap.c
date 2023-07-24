#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps the values of 2 integers
* @a: first integer
* @b: second integer
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
