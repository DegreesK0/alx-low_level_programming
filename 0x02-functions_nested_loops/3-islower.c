#include "main.h"

/**
* _islower - checks for lowercase characters
* @c: letter to be checked
*
* Return: 1 if input is lower, 0 if input is anything else
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

