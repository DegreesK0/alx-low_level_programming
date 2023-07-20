#include "main.h"

/**
* print_square - prints a square of size "size"
* @size: the size of the square
*/

void print_square(int size)
{
	int rows;
	int columns;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (rows = 0; rows < size; rows++)
	{
		for (columns = 0; columns < size; columns++)
		{
			_putchar('#');
		}

		_putchar('\n');

	}
}
