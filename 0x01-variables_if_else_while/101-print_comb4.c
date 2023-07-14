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
	int digit3 = 50;

	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 57; digit2++)
		{
			for (digit3 = digit2 + 1; digit3 <= 57; digit3++)
			{
				putchar(digit1);
				putchar(digit2);
				putchar(digit3);
				if (digit1 != 55 || digit2 != 56 || digit3 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
