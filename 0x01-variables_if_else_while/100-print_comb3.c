#include <stdio.h>

/**
* main - prints out single-digit combinations
*
* Return: 0 is successful
*/

int main(void)
{
	int digit1 = 48;
	int digit2 = 49;

	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		for (digit2 = digit1 +1; digit2 <= 57; digit2++)
		{
			putchar(digit1);
			putchar(digit2);
			if (digit1 != 56 || digit2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
