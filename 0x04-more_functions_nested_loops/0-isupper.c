#include "main.h"

/**
* _isupper - returns 1 if character is upper, returns 0 otherwise
* @c: the characcter in question
*
* Return: 1 if upper, 0 if anything else
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}


}

