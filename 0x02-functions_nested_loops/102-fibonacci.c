#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers
*
* Return: 0? Yay, success.
*/

int main(void)
{
	int i = 0;
	int num1 = 0;
	int num2 = 1;
	int sum = 0;

	printf("0, ");
	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;

		num1 = num2;
		num2 = sum;

		printf("%d, ", sum);
	}

	printf("\n");

	return (0);
}
