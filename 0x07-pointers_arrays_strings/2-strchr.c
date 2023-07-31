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
	char *f = 0;
	int len = 0;
	int i = 0;
	/* unsigned char *byte_s = (unsigned char *)s; */
	/* unsigned char byte_c = (unsigned char) c; */

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			f = &s[i];
			return (f);
		}
	}

	f = NULL;
	return (f);
}
