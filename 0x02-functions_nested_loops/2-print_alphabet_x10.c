#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times
 */

void print_alphabet_x10(void)
{
	int abc = 'a';
	int line = 1;

	for (line = 1; line <= 10; line++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}

		_putchar('\n');
	}

	/*return (0);*/
}
