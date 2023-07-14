#include <stdio.h>

/**
* main - prints out single-digit combinations
*
* Return: 0 is successful
*/
int main(void)
{
	int digit = 48;

	for (digit = 48; digit <= 57; digit++)
	{
		putchar(digit);
		if (digit < 57)
		{
		putchar(',');
		putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
