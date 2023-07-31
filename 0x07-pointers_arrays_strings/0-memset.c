#include "main.h"
#include <stdio.h>

/**
* _memset - fills the first n bytes of
* the memory area pointed to by s with the constant byte b
* @s: memory area pointed to
* @b: constant byte b
* @n: number of bytes to fill
*
* Return: the pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned char *byte_s = (unsigned char *)s;
	unsigned char byte_b = (unsigned char)b;
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		byte_s[i] = byte_b;
	}

	return (s);

}
