#include "main.h"

/**
* _isdigit - returns 1 if character is a digit, returns 0 otherwise
* @c: the character in question
*
* Return: 1 if digit, 0 if anything else
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

}

