#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers
*
* Return: 0? Yay, success.
*/

int main(void)
{
	int i = 0;
	int position = 0;
	long num1 = 0;
	long num2 = 1;
	long sum = 0;

	for (i = 0; i < 91; i++)
	{
		sum = num1 + num2;

		num1 = num2;
		num2 = sum;
		
		position = i + 1;

		printf("%d: ", position);
		printf("%ld", sum);
		printf("\n");
	}

	for (i = 90; i < 98; i++)
	{

	}

	/*printf("\n");*/

	return (0);
}
