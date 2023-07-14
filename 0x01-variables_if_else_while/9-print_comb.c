#include <stdio.h>

/**
* main - prints out single-digit combinations
*
* Return: 0 is successful
*/

int main(void)
{
	char digit1 = '0';
	char digit2 = '0';

	for (digit1 = '0'; digit1 <= '9'; digit1++)
	{
		for (digit2 = '0'; digit2 <= '9'; digit2++)
		{
			putchar(digit1);
			putchar(',');
			putchar(digit2);
		}
	}

	putchar('\n');

	return (0);
}
