#include "main.h"
#include <stdio.h>

/**
* _strcat - appends the src string to the end of the dest string
* @src: string appended to end
* @dest: string at the beginning
*
* Return: a pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)
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
	for (i = dest_len; i < dest_len + src_len - 1; i++)
	{
		dest[i] = src[j];
		j++;
	}

	dest[i] = '\0';


	return (dest);
}

