#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a new duplicated string
 * @str: the string to be duplicated
 *
 * Return: NULL if str=NULL, else return a pointer to the duplicated string
 */

char *_strdup(char *str)
{
	int i = 0;
	char *dup_str;


	if (str == NULL)
		return (NULL);

	dup_str = malloc(sizeof(*str));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		dup_str[i] = str[i];
	}

	return (dup_str);
}


