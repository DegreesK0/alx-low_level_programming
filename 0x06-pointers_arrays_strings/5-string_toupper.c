#include "main.h"
#include <stdio.h>

/**
* string_toupper - changes letters of a string to uppercase
* @str: the string to be changed
*
* Return: the uppercase string
*/

char *string_toupper(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

	}

	return (str);
}


