#include "main.h"
#include <stdio.h>

/**
* _puts_recursion - prints a string usingin putchar, followed by a newline
* @s: The string to be printed
*/

void _puts_recursion(char *s)
{

	_putchar(*s);

	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
	}

	if (*s == '\0')
	{
		_putchar('\n');
	}

}


