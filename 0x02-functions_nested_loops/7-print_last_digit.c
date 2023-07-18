#include "main.h"

/**
* print_last_digit - prints the last digit of the input integer
* @num: integer with a last digit
*
* Return: returns the last_digit
*/

int print_last_digit(int num)
{
	int last_digit = 0;

	if (num < 0)
	{
		num = -num;
	}


	last_digit = num % 10;
	_putchar(last_digit + '0');

	return (last_digit);
}
