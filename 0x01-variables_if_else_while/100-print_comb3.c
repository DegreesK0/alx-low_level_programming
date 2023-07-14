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

	/* first for loop prints the first digit */
	for (digit1 = 48; digit1 <= 57; digit1++)
	{
		/*Second loop prints the second digit. Always starts at 1 more than the first digit*/
		for (digit2 = digit1 + 1; digit2 <= 57; digit2++)
		{
			putchar(digit1);
			putchar(digit2);
			/* Skips the last , and "" at the end of 89 */
			if (digit1 != 56 && digit2 != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);

}


