#include "main.h"

/**
* print_numbers - prints the numbers 0 - 9
*/

void print_numbers(void)
{
	int digit = '0';

	for (digit = '0'; digit <= '9'; digit++)
	{
		_putchar(digit);
	}
	_putchar('\n');
}
