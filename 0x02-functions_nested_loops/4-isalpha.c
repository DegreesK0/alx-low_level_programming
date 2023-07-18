#include "main.h"

/**
* _isalpha - checks for uppercase characters
* @c: letter to be checked
*
* Return: 1 if input is upper, 0 if input is anything else
*/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}

