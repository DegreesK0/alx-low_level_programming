#include "main.h"
#include <stdio.h>

/**
* _strcmp - compares two strings
* @s1: the first string
* @s2: the second string
*
* Return: the difference between two strings. Positive if greater than,
* negative if less then. O if eqaul.
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i] || s1[i] < s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
