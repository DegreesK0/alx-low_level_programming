#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies the string pointed to by src to dest
* @dest: destination string
* @src: source string
*
* Return: the destination string
*/

char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
