#include "main.h"

/**
 * print_number - print out an integer;
 * @n: integer we are printing;
 */
void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		num = -n;
		_putchar('-');
	} else
	{
		num = n;
	}

	if (num / 10)
		print_number(num / 10);

	_putchar((n1 % 10) + '0');
}
