#include "main.h"

/**
* print_sign - checks if input is postive, zero or negative.
* @n: number to be checked
*
* Return: 1 for positve, 0 for zero, -1 for negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
