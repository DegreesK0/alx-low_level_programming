#include "main.h"
#include <stdio.h>

/**
* cap_string - capitalizes the first letter of each word in a string
* @str: the string to be changed
*
* Return: the capitalized string
*/

char *cap_string(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
		len++;

	for (i = 1; i < len; i++)
	{
		if ((str[i - 1] == ',' || str[i - 1] == ';' || str[i - 1] == '.' ||
			str[i - 1] == '!' || str[i - 1] == '?' || str[i - 1] == '"' ||
			str[i - 1] == '(' || str[i - 1] == ')' || str[i - 1] == '{' ||
			str[i - 1] == '}' || str[i - 1] == 32 || str[i - 1] == 9 ||
			str[i - 1] == 10) && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}


