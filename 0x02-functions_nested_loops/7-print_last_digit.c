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

	last_digit = num % 10;
	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}


	_putchar(last_digit + '0');

	return (last_digit);
}

