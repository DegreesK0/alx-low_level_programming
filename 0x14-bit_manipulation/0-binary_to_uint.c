#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: binary string to be turned into an integer
 *
 * Return: 1 on success, 0 on fail
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;
	int i = 0;
	int len = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	for (i = 0; i < len; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		uint = (uint << 1) + (b[i] - '0');
		/* printf("%d\n", uint); */
	}


	return (uint);
}
