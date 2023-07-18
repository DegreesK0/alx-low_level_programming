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
	

	last_digit = _abs(num) % 10;

	_putchar(last_digit);

	return (0);
}
