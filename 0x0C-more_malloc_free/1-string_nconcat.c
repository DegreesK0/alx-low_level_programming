#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 needed
 *
 * Return: pointer to a newly allocated space for the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len1;
	unsigned int len2;
	unsigned int total_len;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (n <= len2)
		total_len = len1 + n + 1;
	else
		total_len = len1 + len2 + 1;

	concat_str = malloc(sizeof(char) * (total_len));

	if (concat_str == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_str[i] = s1[i];

	for (j = 0; j < n && s2[j] != '\0'; j++)
		concat_str[i + j] = s2[j];

	concat_str[i + j] = '\0';
	return (concat_str);
}
