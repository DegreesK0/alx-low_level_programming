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
	int len;

	if (*s != '\0')
	{
		s++;
		len = _strlen_recursion(s) + 1;
	}

	return(len);
}


