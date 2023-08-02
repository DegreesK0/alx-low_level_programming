#include "main.h"
#include <stdio.h>

/**
* factorial - returns the factorial fo a given number
* @n: number to find factorial of
*
* Return: factorial of n or -1 if there is an error.
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}


