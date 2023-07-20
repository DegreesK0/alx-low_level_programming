#include "main.h"

/**
* print_triangle - prints out a triangle
* @size: size of the triangle
*/

void print_triangle(int size)
{


	int i = 0;
	int j = 0;
	int k = 0;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (k = size - i - 1; k > 0; k--)
		{
			_putchar(' ');
		}

		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
	}
}
