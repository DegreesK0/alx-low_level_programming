#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number
 * @index: the index to check
 *
 * Return: the value at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = 1UL << index;

	if (n & mask)
		return (1);
	else
		return (0);


	/* return ((n & mask) ? 1 : 0); */
	/* return (0); */
}
