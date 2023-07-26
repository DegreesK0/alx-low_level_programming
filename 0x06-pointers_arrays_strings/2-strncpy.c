#include "main.h"
#include <stdio.h>

/**
* _strncpy - copies a string src to dest
* @dest: copied string
* @src: string to be copied
*
* Return: the dest string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for(; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
