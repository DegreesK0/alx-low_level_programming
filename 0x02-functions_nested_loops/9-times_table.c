#include "main.h"

/**
* times_table - prints the 9 times table
*/

void times_table(void)
{
	int i = 0;
	int j = 0;
	int mul_9 = 0;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			mul_9 = i * j;
			if (j > 0)
			{
				if (mul_9 / 10 == 0)
					_putchar(' ');
				else
				_putchar(mul_9 / 10 + '0');
			}
			_putchar(mul_9 % 10 + '0');

			if (j == 9)
				break;

			_putchar(',');
			_putchar(' ');

		}

		_putchar('\n');
	}

}
