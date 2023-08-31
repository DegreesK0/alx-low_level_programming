#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - set the value of a bit at a given index to 1
 * @n: the number
 * @index: the index to use
 *
 * Return: 1 on a success, -1 on fail
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	/* unsigned long int mask; */

	/* if (index >= sizeof(unsigned long int) * 8) */
	/*	return (-1); */

	/* mask = 1UL << index; */

	/* *n |= mask; */

	/* return (0); */

	unsigned long int p;

	if (index > 64)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
