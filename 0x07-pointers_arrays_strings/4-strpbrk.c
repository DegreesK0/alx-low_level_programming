#include "main.h"
#include <stdio.h>

/**
* _strpbrk - locates the first occurenece in the string s
* of any bytes in the string accept
* @s: string to locate in
* @accept: string to locate
*
* Return: a pointer to the byte in s that matches one of te bytes in accept
* or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	char *str = s;
	char *a = accept;

	for (str = s; *str != '\0'; str++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*a == *str)
			{
				return ((char *)str);
			}
		}
	}

	return (NULL);
}


