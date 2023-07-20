#include "main.h"

/**
* more_numbers - prints the numbers 0 - 14, ten times
*/

void more_numbers(void)
{
	int digit = 0;
	int lines = 0;

	for (lines = 0; lines < 10; lines++)
	{
		for (digit = 0; digit <= 14; digit++)
		{
			if (digit >= 10)
				_putchar(digit / 10 + '0');
			_putchar(digit % 10 + '0');

		}
		_putchar('\n');
	}

}
