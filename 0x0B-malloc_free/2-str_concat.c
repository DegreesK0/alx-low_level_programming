#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings and returns a pointer to the result
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on failure, the concatenated string on success
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int len1 = 0;
	int len2 = 0;
	char *concat_str;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (s1[len1])
			len1++;
	}

	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (s2[len2])
			len2++;
	}

	concat_str = malloc(sizeof(char) * (len1 + len2 + 1));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		concat_str[i] = s1[i];

	for (j = 0; s1[j] != '\0'; j++)
		concat_str[i + j] = s2[j];

	return (concat_str);
}


