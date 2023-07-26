#include "main.h"
#include <stdio.h>

/**
* _strncat - appends the src string to the end of the dest string
* @src: string appended to end
* @dest: string at the beginning
* @n: uses only n bytes from the source
*
* Return: a pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int dest_len = 0;
	int src_len = 0;


	while (dest[dest_len] != '\0')
		dest_len++;

	while (src[src_len] != '\0')
		src_len++;

	j = 0;
	for (i = dest_len; i < dest_len + src_len && i < dest_len + n; i++)
	{
		dest[i] = src[j];
		j++;
	}

	dest[i] = '\0';

	return (dest);
}

