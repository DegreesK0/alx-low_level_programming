#include "main.h"
#include <stdio.h>

/**
* _memcpy - copies n bytes from memory area src to memory area dest
* @dest: memory area to copy to
* @src: memory are to copy from
* @n: number of bytes to fill
*
* Return: the pointer to the memory area dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned char *byte_dest = (unsigned char *)dest;
	unsigned char *byte_src = (unsigned char *)src;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		byte_dest[i] = byte_src[i];
	}

	return (dest);
}
