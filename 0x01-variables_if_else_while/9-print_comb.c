#include <stdio.h>

/**
* main - prints out single-digit combinations
*
* Return: 0 is successful
*/

int main(void)
{
	int digit1 = 48;
	int digit2 = 48;

	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		for (digit2 = 48; digit2 <= 57; digit2++)
		{
			putchar(digit1);
			putchar(',');
			putchar(digit2);
		}
	}

	putchar('\n');

	return (0);
}
