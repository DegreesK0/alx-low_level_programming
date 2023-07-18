#include "main.h"

/**
* print_times_table - prints timestable till specified number less than 15
* @n: input number
*
*/

void print_times_table(int n)
{
	int i = 0;
	int j = 0;
	int mul = 0;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				mul = i * j;

				if (j > 0)
				{
					if (mul / 100 == 0)
						_putchar(' ');
					else
						_putchar(mul / 100 + '0');

					if (mul / 10 % 10 == 0 && mul < 100)
						_putchar(' ');
					else
					_putchar(mul / 10 % 10 + '0');
				}
				_putchar(mul % 10 + '0');

				if (j == n)
					break;

				_putchar(',');
				_putchar(' ');

			}

			_putchar('\n');
		}
	}
}
