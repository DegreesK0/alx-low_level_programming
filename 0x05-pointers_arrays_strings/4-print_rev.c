#include "main.h"
#include <stdio.h>

/**
* print_rev - prints a string in reverse
* @s: string to be printed
*/

void print_rev(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		i = i;
	}
	for (i = i; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
