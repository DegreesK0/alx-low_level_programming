#include "main.h"
#include <stdio.h>

/**
* puts_half - prints the last half of a string
* @str: string to be printed
*/

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		i = i;
	}

	for (j = i / 2; j <= i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
