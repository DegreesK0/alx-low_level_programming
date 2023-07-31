#include "main.h"
#include <stdio.h>

/**
* _strspn - gets the length of a prefix substring
* @s: superstring
* @accept: substring
*
* Return: number of bytes in the intial segment of s
* which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *str = s;
	char *a = accept;

	for (str = s; *str != '\0'; str++)
	{
		for (a = accept; *a != '\0'; a++)
		{
			if (*a == *str)
			{
				count++;
				break;
			}
		}
		if (*a == '\0')
			break;
	}


	return (count);
}
