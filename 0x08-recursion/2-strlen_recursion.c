#include "main.h"
#include <stdio.h>

/**
* _strlen_recursion - returns the length of a string
* @s: string whos length we wanna find
*
* Return: the length of the string
*/

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		s++;
		len = 1 + _strlen_recursion(s);
	}

	return (len);
}


