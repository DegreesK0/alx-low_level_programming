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
	long num1_half1 = 0;
	long num1_half2 = 0;
	long num2_half1 = 0;
	long num2_half2 = 0;
	long sum_half1 = 0;
	long sum_half2 = 0;

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

	num1_half1 = num1 / 10000000000;
	num1_half2 = num1 % 10000000000;
	num2_half1 = num2 / 10000000000;
	num2_half2 = num2 % 10000000000;

	for (i = 90; i < 98; i++)
	{	
		sum_half1 = num1_half1 + num2_half1;
		sum_half2 = num1_half2 + num2_half2;

		num1_half1 = num2_half1;
		num1_half2 = num2_half2;

		num2_half1 = sum_half1;
		num2_half2 = sum_half2;

		position = i + 1;

		printf("%d: ", position);
		printf("%ld", sum_half1);
		printf("%ld", sum_half2);
		printf("\n");

	}

	/*printf("\n");*/

	return (0);
}
