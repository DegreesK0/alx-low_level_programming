#include <stdio.h>

/**
* main - prints out single-digit combinations
*
* Return: 0 is successful
*/

int main(void)
{
	int digit1;
	int digit2;
	int digit3;
	int digit4;

	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		for (digit2 = 48; digit2 <= 57; digit2++)
		{
			for (digit3 = 48; (digit3 <= 57); digit3++)
			{
				/*if (digit3 < digit1)
					{
						digit3 = digit1;
					}*/
				for (digit4 = 48; digit4 <= 57; digit4++)
				{
					if (digit1 == 48 && digit2 == 48 && digit3 == 48 && digit4 == 48)
					{
						digit4 = 49;
					}
					/*if (digit4 < digit2)
					{
						digit4 = digit2;
					}*/
					if (digit1 + digit2 < digit3 + digit4)
					{
						putchar(digit1);
						putchar(digit2);
						putchar(' ');
						putchar(digit3);
						putchar(digit4);
						if (digit1 != 57 || digit2 != 56 || digit3 != 57 || digit4 != 57)
						{
							putchar(',');
							putchar(' ');
						}
					}
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
