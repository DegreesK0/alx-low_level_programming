#include <stdio.h>

/**
 * main - counts single digit numbers of base 10
 *
 * Return: 0 means we are good
*/

int main(void)
{
	int digit = 0;

	for (digit = 0; digit < 10; digit++)
	{
		printf("%d", digit);
	}

	printf("\n");

	return (0);
}
