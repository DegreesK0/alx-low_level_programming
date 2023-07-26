#include "main.h"
#include <stdio.h>

/**
*
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int len_s1 = 0;
	int len_s2 = 0;
	/*int largest = 0;*/

	while (s1[len_s1] != '\n')
		len_s1++;

	while (s2[len_s2] != '\n')
		len_s2++;

	/*if (len_s2 > len_s1)
		largest = len_s2;
	else
		largest = len_s1;*/

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		/*else if (s1[largest] == s2[largest])
		{
			return(0)
		}*/
	}

	return (0);
}
