#include "main.h"
#include <stdio.h>

/**
* _strlen - returns the length of a string
* @s: the string in question
*
* Return: the length of said string
*/

int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
	{
		length = length;
	}

	return (length);
}
