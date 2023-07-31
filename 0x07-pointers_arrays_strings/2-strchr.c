#include "main.h"
#include <stdio.h>

/**
* _strchr - returns a pointer to the first occurence of the character
* c in the sting s, or NULL if the character is not found.
* @s: string to search
* @c: character to search for
*
* Return: pointer to the first occurence of the character
*/


char *_strchr(char *s, char c)
{
	/* while (*s != '\0') */
	/* { */
	/*	if (*s == c) */
	/*		return ((char *)s); */
	/*	s++; */
	/* } */

	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}

	return (NULL);
}
