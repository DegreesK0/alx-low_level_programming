#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if success, 0 if fail
 */

int get_endianness(void)
{
	unsigned int n = 1;
	char *byte;

	byte = (char *)&n;

	if (*byte == 1)
		return (1);
	else
		return (0);
}
