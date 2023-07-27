#include "main.h"
#include <stdio.h>

/**
* leet - encodes a string using 1337
* @str:  string to be encoded
*
* Return: encoded string
*/

char *leet(char *str)
{
	int i, j;
	int len = 0;

	char *src =  "aAeEoOtTlL";
	char *code = "4433007711";

	while (str[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == src[j])
			{
				str[i] = code[j];
				break;
			}
		}
	}

	return (str);
}


