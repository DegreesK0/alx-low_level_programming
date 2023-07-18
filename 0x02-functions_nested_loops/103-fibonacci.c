#include <stdio.h>

/**
* main - prints the first 50 Fibonacci numbers
*
* Return: 0? Yay, success.
*/

int main(void)
{
	long i = 0;
	long num1 = 0;
	long num2 = 1;
	long sum = 0;
	long even_sum = 0;

	for (i = 0; sum < 4000000; i++)
	{
		sum = num1 + num2;

		num1 = num2;
		num2 = sum;

		if (sum % 2 == 0)
		{
			even_sum = even_sum + sum;
		}
	}

	printf("%ld", even_sum);
	printf("\n");

	return (0);
}
