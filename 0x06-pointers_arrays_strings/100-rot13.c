#include "main.h"
#include <stdio.h>

/**
* rot13 - encodes a string using rot13
* @str:  string to be encoded
*
* Return: encoded string
*/

char *rot13(char *str)
{
	int i, j;

	char *src =  "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *code = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != 0; i++)
	{
		for (j = 0; src[j] != '\0'; j++)
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


