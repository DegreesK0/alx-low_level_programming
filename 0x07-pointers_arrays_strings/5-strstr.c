#include "main.h"
#include <stdio.h>

/**
* _strstr - locates the first occurenece in the string haystack
* of any bytes in the string needle
* @haystack: string to search in
* @needle: string to locate
*
* Return: a pointer to the beginning of the located substring
* or NULL if no such byte is found
*/

char *_strstr(char *haystack, char *needle)
{
	/* char *str = haystack; */
	/* char *a = needle; */

	/* for (str = haystack; *str != '\0'; str++) */
	/* { */
	/*	for (a = needle; *a != '\0'; a++) */
	/*	{ */
	/*		if (*a == *str) */
	/*		{ */
	/*			return ((char *)str); */
	/*		} */
	/*	} */
	/* } */

	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}

	return (NULL);
}


