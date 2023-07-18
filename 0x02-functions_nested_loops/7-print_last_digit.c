#include "main.h"

/**
* print_last_digit - prints the last digit of the input integer
* @num: integer with a last digit
*
* Return: 0 means success
*/

int print_last_digit(int num)
{
	int last_digit = 0;
	int abs_num = 0;

	if (num >= 0)
	{
		abs_num = num;
	}
	else
	{
		abs_num = -num;
	}


	last_digit = abs_num % 10;
	_putchar(last_digit + '0');

	return (0);
}
