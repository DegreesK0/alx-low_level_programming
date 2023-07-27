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

	char *src =  "aAeEoOtTlL";
	char *code = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == src[j])
			{
				str[i] = code[j];
			}
		}
	}

	return (str);
}


