#include "main.h"

/**
* print_diagonal - prints a diagonal line of length n
* @n: length of line
*/

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			if (j == i - 1)
			{
				_putchar('\\');
				_putchar('\n');
				continue;
			}

			_putchar(' ');
		}
	}

}
