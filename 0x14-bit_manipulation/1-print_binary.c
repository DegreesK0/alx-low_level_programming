#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_binary - converts and prints a number in binary
 * @n: number to be printed
 */

void print_binary(unsigned long int n)
{
	/* int i = 0, d = 0; */

	/*for (i = 63; i >= 0; i--) */
	/*{ */
	/*	d = n >> i; */
	/*	if (d & 1) */
	/*		printf("1"); */
	/*	else */
	/*		printf("0"); */
	/*} */

	if (n > 1)
	{
		print_binary(n >> 1);
	}

	putchar((n & 1) ? '1' : '0');
}
